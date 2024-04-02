#include<iostream>
#include<set>
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

	multiset<char> s(str.begin(), str.end());

	for (int i = 0; i < 'z' - 'a' + 1; i++) {
		cout<<s.count('a' + i)<<" ";
	}
	return 0;
}