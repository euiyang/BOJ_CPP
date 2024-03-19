#include<iostream>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	//1�� �ڱ� �ڽ��� ������ ����� �ּ� ����� ���ϱ� ����
	//1���� ����, �� ������ ������ �� �� ��

	int iArrSize;
	cin >> iArrSize;
	cin.ignore();
	int* numArr = new int[iArrSize];

	for (int i = 0; i < iArrSize; i++) {
		cin >> numArr[i];
	}
	cin.ignore();

	int iAnswer=0;

	if (iArrSize == 1) iAnswer = numArr[0] * numArr[0];
	else {
		sort(numArr, numArr + iArrSize);
		iAnswer = numArr[0] * numArr[iArrSize - 1];
	}

	cout << iAnswer;

	return 0;
}