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
	int count = 1;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ',')count++;
	}
	cout << count;
	return 0;
}