#include<iostream>
#pragma warning(disable:4996)

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int a[1000] = { 0, };
	int sum[1000] = { 0, };
	a[0] = 1;
	sum[0] = 1;

	//1 22 333 4444와 같은 형식으로 진행하는 배열
	//1 3 6 10->a, 누적
	for (int i = 1; i < 1000; i++) {
		a[i] = a[i-1]+i+1;
	}

	int iALoc=1;
	int iNextIndex = 1;
	for (int i = 1; i < 1000; i++) {
		if (iNextIndex==i) iNextIndex = a[iALoc++];
		sum[i] = sum[i-1]+a[iALoc-1]-a[iALoc-2];
	}


	int iInput1, iInput2;
	cin >> iInput1 >> iInput2;
	int iAnswer;

	if (iInput1 > 1)iAnswer = sum[iInput2 - 1] - sum[iInput1 - 2];
	else iAnswer = sum[iInput2 - 1];

	cout << iAnswer;
}