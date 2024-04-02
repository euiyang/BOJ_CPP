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

	int iSize = str.size();

	for (int i = 0; i <iSize; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + ('a' - 'A');
		}
		else {
			str[i] = str[i] - ('a' - 'A');
		}
	}
	cout <<str;

	return 0;
}