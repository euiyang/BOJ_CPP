#include<iostream>
#include<string>

using namespace std;

char** arr;
bool keyArr[6];//('a', 'b', 'c', 'd', 'e', 'f')

void bfs(int _col,int _row) {
	//�� �� �ִ� ��: ����('a', 'b', 'c', 'd', 'e', 'f'), . 
	// 1���� ���� , �������� ���ϸ� -1
	//������ �ڸ� . ä���

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