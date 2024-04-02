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
		int iPeopleNum, iSeatArrSize;
		cin >> iPeopleNum >> iSeatArrSize;
		cin.ignore();

		bool* seatArr = new bool[iSeatArrSize] {false, };

		int answerCnt = 0;

		for (int j = 0; j < iPeopleNum; j++) {
			int iPeopleLoc;
			cin >> iPeopleLoc;
			cin.ignore();
			if (!seatArr[iPeopleLoc-1])seatArr[iPeopleLoc-1] = true;
			else {
				answerCnt++;
			}
		}

		cout << answerCnt << "\n";
	}
	return 0;
}