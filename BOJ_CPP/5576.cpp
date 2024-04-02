#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

void swapArr(int* arr, int _input) {
	if (_input > arr[2]) {
		arr[2] = _input;
		if (arr[2] > arr[1]) {
			swap(arr[2], arr[1]);
			if (arr[1] > arr[0]) 
				swap(arr[0], arr[1]);
		}
	}
}

int main() {
	init();
	int iInput;
	int iFSum(0), iSSum(0);
	int firstArr[3] = { 0, };
	int secondArr[3] = { 0, };
	//각 대학 10명중 제일 점수 높은 3명 합산
	for (int i = 0; i < 10; i++) {
		//대학 1
		cin >> iInput;
		cin.ignore();
		swapArr(firstArr, iInput);
	}
	for (int i = 0; i < 10; i++) {
		//대학 2
		cin >> iInput;
		cin.ignore();
		swapArr(secondArr, iInput);
	}

	for (int i = 0; i < 3; i++) {
		iFSum += firstArr[i];
		iSSum += secondArr[i];
	}

	cout << iFSum << " " << iSSum;

	return 0;
}