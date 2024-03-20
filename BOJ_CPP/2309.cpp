#include<iostream>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	//9명이 있는데 이 중 7개를 골라 100이 되게 해라
	//반대로 2명의 키가 9명의 키의 합-100이 되게 해라
	int heightArr[9];
	int iLoc1(0), iLoc2(0);
	int iSum = 0;
	int answerArr[7];

	for (int i = 0; i < 9; i++) {
		cin >> heightArr[i];
		iSum += heightArr[i];
		cin.ignore();
	}

	int iTargetHeight = iSum - 100;

	for (int i = 0; i < 8; i++) {
		for (int j = 1; j < 9; j++) {
			if (heightArr[i] + heightArr[j] == iTargetHeight) {
				iLoc1 = i;
				iLoc2 = j;
			}
		}
	}
	int index = 0;
	for (int i = 0; i < 9; i++) {
		answerArr[index++] = heightArr[i];
		if (i == iLoc1 || i == iLoc2) index--;
	}

	sort(answerArr, answerArr+sizeof(answerArr) / sizeof(int));

	for (int i = 0; i < 7; i++) {
		cout << answerArr[i] << "\n";
	}
	return 0;
}