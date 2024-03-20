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
		int scoreArr[5];
		for (int j = 0; j < 5; j++) {
			cin >> scoreArr[j];
		}

		cin.ignore();

		sort(scoreArr, scoreArr + 5);

		if ((scoreArr[3] - scoreArr[1]) >= 4) {
			cout << "KIN" << "\n";
			continue;
		}
		else {
			cout << (scoreArr[1] + scoreArr[2] + scoreArr[3]) << "\n";
		}
	}
	return 0;
}