#include<stdio.h>
#pragma warning(disable:4996)
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int count = 1;
int* answer;

void bfs(bool* pointArr,vector<vector<int>> &lineArr,int iStartPoint) {
	queue<int> q;
	pointArr[iStartPoint] = true;
	q.push(iStartPoint);
	answer[iStartPoint] = ::count++;

	while (!q.empty()) {
		int point = q.front();
		q.pop();
		
		for (int i = 0; i < lineArr[point].size(); i++) {
				int check = lineArr[point][i];
				if (!pointArr[check]) {
					pointArr[check] = true;
					q.push(check);
					answer[check] = ::count++;
				}
		}
	}
}

int main() {

	//������ ��, ������ ��, ���� ���� �ޱ�
	int iPointNum, iLineNum, iFirstPoint;
	scanf("%d %d %d", &iPointNum, &iLineNum, &iFirstPoint);

	iFirstPoint--;

	//���� ǥ��, �����
	vector<vector<int>> lineVec;
	lineVec.resize(iPointNum);

	for (int i = 0; i < iLineNum; i++) {
		int col, row;
		scanf("%d %d", &col, &row);

		lineVec[col - 1].push_back(row - 1);
		lineVec[row - 1].push_back(col - 1);
	}
	//���� �������� ����
	for (int i = 0; i < iPointNum; i++) {
		sort(lineVec[i].begin(), lineVec[i].end());
	}

	//������ ���� ǥ�� �迭
	bool* pointArr = new bool[iPointNum] {false, };

	//���� �迭
	answer = new int[iPointNum] {0, };

	bfs(pointArr,lineVec,iFirstPoint);


	for (int i = 0; i < iPointNum; i++) {
		printf("%d\n", answer[i]);
	}

	return 0;
}