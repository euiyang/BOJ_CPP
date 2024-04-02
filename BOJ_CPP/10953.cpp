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

	for (int i = 0; i < iInput; i++) {
		string str;
		cin >> str;

		cout << (str[0] + str[2]-2*'0') << "\n";
	}

	return 0;
}