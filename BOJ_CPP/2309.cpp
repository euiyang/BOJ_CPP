#include<iostream>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	//9���� �ִµ� �� �� 7���� ��� 100�� �ǰ� �ض�
	//�ݴ�� 2���� Ű�� 9���� Ű�� ��-100�� �ǰ� �ض�
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