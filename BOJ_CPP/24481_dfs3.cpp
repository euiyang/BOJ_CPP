#include<stdio.h>
#pragma warning(disable:4996)
#include<vector>
#include<algorithm>

using namespace std;

int* answer;

void dfs(int* pointArr, vector<vector<int>>& lineVec, int startPoint,int loc) {
	pointArr[startPoint] = true;
	answer[startPoint] = loc;
	for (int i = 0; i < lineVec[startPoint].size(); i++) {
		int check = lineVec[startPoint][i];
		if (!pointArr[check])dfs(pointArr, lineVec, check,loc+1);
	}
}

int main() {
	//�Է°� �ޱ�(����, ���� ��, ���� ����Ʈ)
	int iPointNum, iLineNum, iFirstPoint;

	scanf("%d %d %d", &iPointNum, &iLineNum, &iFirstPoint);
	iFirstPoint--;

	//������ ���� Ȯ�ο� �迭
	int* pointArr = new int[iPointNum] {false, };

	//���� ��ġ �ޱ�
	vector<vector<int>> lineVec;
	lineVec.resize(iPointNum);

	//���� �迭 ����
	answer = new int[iPointNum];
	for (int i = 0; i < iPointNum; i++) {
		answer[i] = -1;
	}

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
	dfs(pointArr, lineVec, iFirstPoint,0);

	//���� ���
	for (int i = 0; i < iPointNum; i++) {
		printf("%d\n", answer[i]);
	}
}