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
		int iClassNum;
		cin >> iClassNum;
		
		int* numArr = new int[iClassNum];

		for (int j = 0; j < iClassNum; j++) {
			cin >> numArr[j];
		}
		cin.ignore();

		sort(numArr, numArr + iClassNum);

		int iLargestGap(0);

		for (int i = 0; i < iClassNum - 1; i++) {
			int gap = numArr[i + 1] - numArr[i];
			if (iLargestGap < gap)iLargestGap = gap;
		}

		cout << "Class " << i + 1 << "\n";
		cout << "Max " << numArr[iClassNum-1] << ", " << "Min " << numArr[0] << ", " << "Largest gap " <<iLargestGap<<"\n";

	}


	return 0;
}