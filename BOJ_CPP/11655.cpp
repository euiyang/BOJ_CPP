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
	getline(cin, str);

	//대문자 소문자 따로 13글자씩 밀기
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 13;
			if (!(str[i] >= 'a')) {
				str[i] += 26;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] -= 13;
			if (!(str[i] >= 'A')) {
				str[i] += 26;
			}
		}
	}

	for (int i = 0; i < str.size(); i++) {
		cout << str[i];
	}

	return 0;
}