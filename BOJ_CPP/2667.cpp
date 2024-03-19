#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int iSize;

int dfs(char** aptArr,int _iColLoc,int _iRowLoc,int count=1) {
	//���� ��ġ���� �����¿� Ž��
	aptArr[_iColLoc][_iRowLoc] = '0';

	if((_iColLoc+1<iSize)&& aptArr[_iColLoc+1][_iRowLoc]=='1')
		count=dfs(aptArr,_iColLoc+1,_iRowLoc, ++count);
	if ((_iColLoc > 0) && aptArr[_iColLoc-1][_iRowLoc] == '1')
		count=dfs(aptArr, _iColLoc - 1, _iRowLoc, ++count);
	if ((_iRowLoc + 1 < iSize) && aptArr[_iColLoc][_iRowLoc+1] == '1')
		count=dfs(aptArr, _iColLoc , _iRowLoc+1, ++count);
	if ((_iRowLoc >0) && aptArr[_iColLoc][_iRowLoc-1] == '1')
		count=dfs(aptArr, _iColLoc , _iRowLoc-1, ++count);

	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	//��ġ ����
	cin >> iSize;
	char** aptArr = new char*[iSize];
	for (int i = 0; i < iSize; i++) {
		aptArr[i] = new char[iSize] {0, };
	}

	cin.ignore();//cin �ȿ� �ִ� ���ڸ� 1�� ����

	for (int i = 0; i < iSize; i++) {
		cin.getline(aptArr[i],26,'\n');
	}

	//���� ����
	vector<int> answerVec;

	for (int i = 0; i < iSize; i++) {
		for (int j = 0; j < iSize; j++) {
			if (aptArr[i][j] == '1') {
				answerVec.push_back(dfs(aptArr,i,j));
			}
		}
	}

	cout << answerVec.size() << endl;

	sort(answerVec.begin(), answerVec.end());

	for (int i = 0; i < answerVec.size(); i++) {
		cout << answerVec[i] << endl;
	}
	
	return 0;
}