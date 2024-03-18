#include<stdio.h>
#pragma warning(disable:4996)
#include<vector>
#include<algorithm>

using namespace std;

int* answer;
int count = 1;

void dfs(int* pointArr,vector<vector<int>>& lineVec,int startPoint) {
	pointArr[startPoint] = true;
	answer[startPoint] = ::count++;
	for (int i = 0; i < lineVec[startPoint].size(); i++) {
		int check = lineVec[startPoint][i];
		if (!pointArr[check])dfs(pointArr, lineVec, check);
	}
}

int main() {
	//입력값 받기(정점, 간선 수, 시작 포인트)
	int iPointNum, iLineNum, iFirstPoint;

	scanf("%d %d %d", &iPointNum, &iLineNum, &iFirstPoint);
	iFirstPoint--;

	//지나간 정점 확인용 배열
	int* pointArr = new int[iPointNum] {false, };

	//간선 위치 받기
	vector<vector<int>> lineVec;
	lineVec.resize(iPointNum);

	//정답 배열 생성
	answer = new int[iPointNum] {0, };

	for (int i = 0; i < iLineNum; i++) {
		int col, row;
		scanf("%d %d", &col, &row);
		lineVec[col - 1].push_back(row - 1);
		lineVec[row - 1].push_back(col - 1);
	}

	for (int i = 0; i < iPointNum; i++) {
		sort(lineVec[i].begin(), lineVec[i].end());
	}

	//dfs
	dfs(pointArr, lineVec, iFirstPoint);

	//정답 출력
	for (int i = 0; i < iPointNum; i++) {
		printf("%d\n", answer[i]);
	}
}