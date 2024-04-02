#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int iLoopSize;
	cin >> iLoopSize;
	cin.ignore();
	int* inputArr=new int[iLoopSize];
	int index = 0;

	for (int i = 0; i < iLoopSize; i++) {
		int iInput;
		cin >> iInput;
		cin.ignore();
		
		//입력값이 0이면 이전 값을 지운다
		if ((iInput == 0) && (index != 0)) {
			index--;
		}
		else {

			inputArr[index] = iInput;
			index++;
		}
	}

	int iSum = 0;
	for (int i = 0; i < index; i++) {
		iSum += inputArr[i];
	}

	cout << iSum;

	return 0;
}