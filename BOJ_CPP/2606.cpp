#include<stdio.h>
#pragma warning(disable:4996)
#include<vector>
#include<algorithm>

using namespace std;

int count = 0;

void dfs(int* pointArr,vector<vector<int>> &lineVec,int _iStartPoint=0) {
	//������ 1������ �����ϴ� Ž��
	pointArr[_iStartPoint] = true;
	for (int i = 0; i < lineVec[_iStartPoint].size(); i++) {
		int check = lineVec[_iStartPoint][i];
		
		if (!pointArr[check]) {
			::count++;
			dfs(pointArr, lineVec, check);
		}
	}
}

int main() {

	//�� �������κ��� �̾����� ���� �� ���ϱ�
	//��ǻ�ͼ� <=100
	int iComNum, iLineNum;
	scanf("%d %d", &iComNum, &iLineNum);

	int* pointArr = new int[iComNum] {0, };
	vector<vector<int>> lineVec;
	lineVec.resize(iComNum);

	for (int i = 0; i < iLineNum; i++) {
		int iCol, iRow;
		scanf("%d %d", &iCol, &iRow);
		lineVec[iCol - 1].push_back(iRow - 1);
		lineVec[iRow - 1].push_back(iCol - 1);
	}
	for (int i = 0; i < iComNum; i++) {
		sort(lineVec[i].begin(), lineVec[i].end());
	}

	dfs(pointArr,lineVec);
	
	printf("%d", ::count);

	return 0;
}