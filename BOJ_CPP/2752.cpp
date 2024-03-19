#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int inputArr[3];
	cin >> inputArr[0] >> inputArr[1] >> inputArr[2];

	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 3; j++) {
			if (inputArr[i] > inputArr[j]) {
				int tmp = inputArr[i];
				inputArr[i] = inputArr[j];
				inputArr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << inputArr[i] << " ";
	}

	return 0;
}