#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int arr[9];
	int iSum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		iSum += arr[i];
		cin.ignore();
	}

	int targetSum = iSum - 100;

	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr[i] + arr[j] == targetSum) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j)cout << arr[k] << "\n";
				}
				return 0;
			}
		}
	}


	return 0;
}