#include<iostream>
#include<string>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}


int main() {
	init();

	string sStr;
	int iMaxLoopSize,iLoopSize;
	cin >> sStr >> iMaxLoopSize;
	cin.ignore();


	int iStringSize = sStr.size();
	int iCalSize = iStringSize * stoi(sStr);

	if (iCalSize < iMaxLoopSize)iLoopSize = iCalSize;
	else iLoopSize = iMaxLoopSize;

	for (int i = 0; i < iLoopSize; i++) {
		cout << sStr[i % iStringSize];
	}
	
	return 0;
}