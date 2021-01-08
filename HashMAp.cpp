#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	unordered_map<string, vector<string>>Phonebook;
	Phonebook["Rahul"].push_back("9112");
	Phonebook["Rahul"].push_back("9113");
	Phonebook["Rahul"].push_back("9114");
	Phonebook["Vatsal"].push_back("9272");
	Phonebook["Prince"].push_back("892892");
	Phonebook["Lol"].push_back("0202");


	string name;
	cin >> name;
	if (Phonebook.count(name) == 0) {
		cout << "Abeset" << endl;
	}
	else {
		for (string s : Phonebook[name]) {
			cout << s << endl;
		}
	}


	for (auto p : Phonebook) {
		cout << p.first << " -> ";
		for (string s : p.second) {
			cout << s << ",";
		}
		cout << endl;
	}







	return 0;
}
