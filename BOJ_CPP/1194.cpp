#include<iostream>
#include<string>

using namespace std;

char** arr;
bool keyArr[6];//('a', 'b', 'c', 'd', 'e', 'f')

void bfs(int _col,int _row) {
	//갈 수 있는 길: 열쇠('a', 'b', 'c', 'd', 'e', 'f'), . 
	// 1가면 도착 , 도달하지 못하면 -1
	//지나간 자리 . 채우기

}

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();

	int iColInput, iRowInput,iZeroCol,iZeroRow;
	cin >> iColInput >> iRowInput;
	cin.ignore();

	arr = new char*[iColInput];

	for (int i = 0; i < iColInput; i++) {
		arr[i] = new char[iRowInput];
	}
	int iInput;
	for (int i = 0; i < iColInput; i++) {
		for (int j = 0; j < iRowInput; j++) {
			cin >> iInput;
			if (iInput == '0') {
				iZeroCol = i;
				iZeroRow = j;
			}
			cin >> arr[i][j];
		}
		cin.ignore();
	}

	bfs(iZeroCol,iZeroRow);


	return 0;
}