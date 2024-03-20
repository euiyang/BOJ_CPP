#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	int iSum(0);
	int arr[5];
	for (int i = 0; i < 5; i++) {
		int iInput;
		cin >> iInput;
		arr[i] = iInput;
		iSum += iInput;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = i+1; j < 5; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	cout << iSum / 5 << "\n" << arr[2];

	return 0;
}