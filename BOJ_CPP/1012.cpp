#include<iostream>

using namespace std;

bool** arr;
int hor,ver;

void searchArr(int y, int x) {
	arr[y][x] = false;

	// 오른쪽 또는 아래 방향으로 1을 더했을 때, 가로 또는 세로의 크기가 배열의 
	// 크기를 벗어나거나 해당 위치에 true 값이 이어지지 않으면 종료
	if (((x + 1) < hor) && arr[y][x + 1]) {
		cout << "x 방향 성공 좌표:" << x + 1 << " " << y << endl;
		return searchArr(y, x + 1);
	}
	else cout << "x 방향 탈락 좌표:" << x + 1 << " " << y << endl;

	if (((y + 1) < ver) && arr[y + 1][x]) {
		cout << "x 방향 성공 좌표:" << x + 1 << " " << y << endl;
		return searchArr(y + 1, x);
	}
	else cout << "y 방향 탈락 좌표:" << x  << " " << y+1 << endl;

	return;
}

int main() {

	int loop_size;
	cin >> loop_size;

	for (int i = 0; i < loop_size; i++) {
		int num;
		cin >> hor >> ver>>num;

		//이차원 배열 선언
		arr = new bool* [ver];
		for (int j = 0; j < ver; j++) {
			arr[j] = new bool[hor];
		}


		//배열에 배추 위치 표시
		int m, n;
		for (int j = 0; j < num; j++) {
			cin >> m >> n;
			arr[n][m] = true;
		}

		cout << boolalpha;

		for (int j = 0; j < ver;j++) {
			for (int k = 0; k < hor; k++) {
				cout << arr[j][k] << '\t';
			}
			cout << endl;
		}

		int count = 0;

		//배열을 전체 순회하면서 true 값이 있으면 count+1과
		// 해당 위치부터 연결된 true 블록에 대해
		// 재귀함수로 false로 변환
		
		for (int j = 0; j < ver; j++) {
			for (int k = 0; k < hor; k++) {
				if (arr[j][k] == true) {
					cout << "시작 위치" << k << " " << j << endl;
					count++;
					searchArr(j, k);
				}
			}
		}

		cout << count << endl;
	}

	return 0;
}