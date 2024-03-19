#include<iostream>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	//1과 자기 자신을 제외한 약수로 최소 공배수 구하기 문제
	//1개면 제곱, 더 많으면 정렬한 양 끝 곱

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