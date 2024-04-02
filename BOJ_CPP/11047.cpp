#include<iostream>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int iCoinTypeNum,iRemainMoney;
	cin >> iCoinTypeNum >> iRemainMoney;
	cin.ignore();

	int* coinArr = new int[iCoinTypeNum];

	for (int i = 0; i < iCoinTypeNum; i++) {
		cin >> coinArr[i];
		cin.ignore();
	}

	sort(coinArr, coinArr + iCoinTypeNum,greater<>());

	int iCoinCnt = 0;

	for (int i = 0; i < iCoinTypeNum; i++) {
		if (iRemainMoney >= coinArr[i]) {
			iCoinCnt += iRemainMoney / coinArr[i];
			iRemainMoney %= coinArr[i];
		}
	}

	cout << iCoinCnt;

	return 0;
}