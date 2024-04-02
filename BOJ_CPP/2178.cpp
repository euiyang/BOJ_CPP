#include<iostream>
#include<queue>

using namespace std;

int iMaxCol;
int iMaxRow;
queue<pair<int,int>> q;
bool** arr;
int** dist;
int x[4] = { -1,+1,0,0 };
int y[4] = { 0,0,-1,+1 };

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

void bfs(bool** arr, int _count = 1, pair<int, int> p = make_pair(0, 0)) {
	arr[p.first][p.second] = false;
	q.push(make_pair(p.first, p.second));
	dist[p.first][p.second] = 1;

	while (!q.empty()) {
		pair<int,int> prevPoint = q.front();
		q.pop();

		for (int i = 0; i < 4;i++) {
			//현 위치 기준 상하좌우 이동 가능성 확인
			pair<int, int> newPoint = 
				make_pair(prevPoint.first+x[i],prevPoint.second+y[i]);
			if (!(newPoint.first >= 0 && newPoint.first < iMaxCol &&
				newPoint.second >= 0 && newPoint.second < iMaxRow)) {
				continue;
			}
			if (arr[newPoint.first][newPoint.second]) {
				q.push(make_pair(newPoint.first, newPoint.second));
				dist[newPoint.first][newPoint.second] = dist[prevPoint.first][prevPoint.second] + 1;
				arr[newPoint.first][newPoint.second] = false;
				if ((newPoint.first == (iMaxCol - 1)) && (newPoint.second == (iMaxRow - 1))) return;
			}
		}
	}
	
}

int main() {
	//N*M 미로, 시작 지점 1,1
	//카운트 1로 시작

	int iCol, iRow;
	cin >> iCol >> iRow;
	cin.ignore();

	iMaxCol=iCol;
	iMaxRow=iRow;

	//지도 저장
	arr = new bool* [iMaxCol];
	for (int i = 0; i < iMaxCol; i++) {
		arr[i] = new bool[iMaxRow] {false, };
	}

	for (int i = 0; i < iMaxCol; i++) {
		for (int j = 0; j < iMaxRow; j++) {
			if (getchar() == '1')arr[i][j] = true;
		}
		cin.ignore();
	}

	//원점부터 거리 기록용 배열
	dist = new int* [iMaxCol];
	for (int i = 0; i < iMaxCol; i++) {
		dist[i] = new int[iMaxRow] {0, };
	}

	bfs(arr);

	cout << dist[iMaxCol - 1][iMaxRow - 1];

	return 0;
}