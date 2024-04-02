#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

void dfs(bool* dotArr, vector<vector<int>>* vec, int _startPoint) {
	dotArr[_startPoint] = true;
	cout << _startPoint+1 << " ";

	for (int i = 0; i< (*vec)[_startPoint].size(); i++) {
		//간선이 존재하며 해당 점을 지나지 않은 경우
		int loc = (*vec)[_startPoint][i];
		if (!dotArr[loc])dfs(dotArr, vec, loc);
	}
}

void bfs(bool* dotArr, vector<vector<int>>* vec, int _startPoint) {
	queue<int> q;
	dotArr[_startPoint] = true;
	q.push(_startPoint);
	cout << _startPoint+1 << " ";

	while (!q.empty()) {
		int reStartPoint = q.front();
		q.pop();
		for (int j = 0; j < (*vec)[reStartPoint].size(); j++) {
			int val = (*vec)[reStartPoint][j];
			if (!dotArr[val]) {
				dotArr[val] = true;
				q.push(val);
				cout << val+1 << " ";
			}
		}
	}
}

int main() {
	init();

	int iDotNum,iLineNum,iStartNum;
	cin >> iDotNum>> iLineNum>>iStartNum;
	cin.ignore();

	--iStartNum;

	//점 배열
	bool* dotArr = new bool[iDotNum] {false, };

	vector<vector<int>> vec;

	vec.resize(iDotNum);

	//양방향 간선 넣기
	for (int i = 0; i < iLineNum; i++) {
		int iCol, iRow;
		cin >> iCol >> iRow;
		cin.ignore();

		vec[iCol - 1].push_back(iRow - 1);
		vec[iRow - 1].push_back(iCol - 1);
	}

	for (int i = 0; i < iDotNum; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	

	dfs(dotArr, &vec, iStartNum);
	cout << "\n";
	dotArr = new bool[iDotNum] {false, };
	bfs(dotArr,&vec,iStartNum);

	return 0;
}