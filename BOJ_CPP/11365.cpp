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
	while (true) {
		getline(cin, str);
		if (str.compare("END")==0)break;
		for (auto it = str.rbegin(); it != str.rend();it++) {
			cout << *it;
		}
		cout << "\n";
	}

	return 0;
}