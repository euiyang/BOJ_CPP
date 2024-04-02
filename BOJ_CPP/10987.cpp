#include<iostream>
#include<string>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	string str;
	cin >> str;
	cin.ignore();

	int iSize = str.size();
	int count(0);

	for (int i = 0; i < iSize; i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
			str[i] == 'o' || str[i] == 'u') {
			count++;
		}
	}

	cout << count;

	return 0;
}