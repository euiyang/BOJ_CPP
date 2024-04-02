#include<iostream>
#include<string>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

string Rev(string str) {
	string tmp = "";
	int iSize = str.size();
	for (int i = 0; i < iSize; i++) {
		tmp.push_back(str[iSize - 1 - i]);
	}
	return tmp;
}

int main() {
	init();

	string iFInput, iSInput;
	cin >> iFInput >> iSInput;
	cin.ignore();
	
	cout<<stoi(Rev(to_string(stoi(Rev(iFInput))+stoi(Rev(iSInput)))));
	
	return 0;
}