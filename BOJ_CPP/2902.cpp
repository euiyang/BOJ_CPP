#include<iostream>
#include<string>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	string sInput;
	cin >> sInput;
	string answer="";
	answer.push_back(sInput[0]);

	for (int i = 1; i < sInput.size(); i++) {
		if (sInput[i] == '-')answer.push_back(sInput[i++ + 1]);
	}

	cout << answer;

	return 0;
}