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

	//현 글자 공백 다음 글자 upper
	for (int i = 0; i < iInput; i++) {
		string str;
		getline(cin,str);
		int iLoopSize = str.size();

		for (int j = 0; j < iLoopSize; j++) {
			if(j==0&&str[j] >= 'a' && str[j] <= 'z') str[j] -= 'a' - 'A';
		}
		cout << str<<"\n";
	}
	

	return 0;
}