#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	//�ڿ��� 7�� �� ¦���� ��� ���� ���ϰ� ¦���� �ּڰ� ���ϱ�
	int iLoopSize;
	cin >> iLoopSize;
	cin.ignore();

	for (int i = 0; i < iLoopSize; i++) {
		int iSum(0), iIndex(0),iMin(100);
		int numArr[7];

		for (int j = 0; j < 7; j++) {
			int iInput;
			cin >> iInput;
			cin.ignore();

			if (iInput % 2 == 0) {
				numArr[iIndex++] = iInput;
				iSum += iInput;
				if (iMin > iInput)iMin = iInput;
			}
		}
		cout << iSum << " " << iMin << "\n";
	}
	return 0;
}