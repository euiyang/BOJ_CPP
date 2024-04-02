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

	int count = 0;
	for (auto it = str.begin(); it != str.end(); it++) {
		count++;
		cout << *it;
		if (count == 10) {
			count = 0;
			cout << "\n";
		}
	}

	return 0;
}