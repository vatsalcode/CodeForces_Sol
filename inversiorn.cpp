long long int merge(int a[], long long int s, long long int e) {
    long long int mid  = s+ (e-s)/2;
    long long int i=s, j = mid +1, k=s;
    long long temp[1000000];
    long long int cnt = 0;
    
    while(i <= mid and j <=e) {
        if(a[i] <= a[j]) {
            temp[k] = a[i];
            k++;
            i++;
        }
        else {
            temp[k++] = a[j++];
            cnt += mid -i +1;
        }
    }
    while(i<=mid) {
        temp[k++] = a[i++];
    }
    
    while(j<=e) {
        temp[k++] = a[j++];
    }
    for(int i=s;i<=e;i++) {
        a[i] = temp[i];
    }
    return cnt;
}
long long int inversion_count( int a[], long long int s,long long int e) {
    if(s >= e) {
        return 0;
    }
    long long int mid = s + (e- s) /2;
    long long int x = inversion_count(a ,s, mid);
    long long int y = inversion_count(a , mid+1, e);
    long long int z = merge(a,s,e);
    return x +y+ z;
}
