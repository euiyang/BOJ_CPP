#include<iostream>
#include<algorithm>

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

	for (int i = 0; i < iLoopSize; i++) {
		int numArr[10];
		for (int j = 0; j < 10; j++) {
			cin >> numArr[j];
		}
		cin.ignore();

		sort(numArr, numArr + 10);

		cout << numArr[7] << "\n";
	}

	return 0;
}