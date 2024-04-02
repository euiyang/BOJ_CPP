#include<iostream>
#include<string>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int iInput;
	cin >> iInput;
	cin.ignore();

	for (int i = 0; i < iInput; i++){
		string str1, str2;
		cin >> str1 >> str2;

		cout << "Distances: ";
		for (int i = 0; i < str1.size(); i++) {
			int iRes = str2[i] - str1[i];
			if (str2[i] - str1[i] < 0) iRes += 26;
			cout << iRes << " ";
		}
		cout << "\n";
	}

	return 0;
}