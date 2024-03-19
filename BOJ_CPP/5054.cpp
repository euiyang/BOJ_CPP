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
		int iArrSize;
		cin >> iArrSize;
		cin.ignore();
		int* locArr = new int[iArrSize];

		for (int j = 0; j < iArrSize; j++) {
			cin>>locArr[j];
			cin.ignore();
		}
		int iMax = 0;
		int iMin = 100;

		for (int j = 0; j < iArrSize; j++) {
			int tmp=locArr[j];
			if (iMax < tmp)iMax = tmp;
			if (iMin > tmp)iMin = tmp;
		}
		
		cout << (iMax-iMin)*2 << "\n";
	}
	return 0;
}