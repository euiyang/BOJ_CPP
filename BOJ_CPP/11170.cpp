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

	for (int i = 0; i < iLoopSize; i++) {
		int iStart, iEnd;
		cin >> iStart >> iEnd;
		cin.ignore();
		int count = 0;

		for (int j = iStart; j <= iEnd; j++) {
			int iRemain = j;
			while (true) {
				if (iRemain==0|| iRemain % 10 == 0)count++;
				if (iRemain / 10 == 0)break;
				else iRemain /= 10;
			}
		}
		cout << count << "\n";
	}

	return 0;
}