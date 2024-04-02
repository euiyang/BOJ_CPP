#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int iSrc, iDst;
int answer=0;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

void dfs(bool** arr,vector<vector<int>>* vec,int count=0,int iStartPoint=(::iSrc - 1)) {
	if (iStartPoint == (iDst - 1)) {
		answer = count;
		return;
	}
	(*arr)[iStartPoint] = true;
	int iVecSize = (*vec)[iStartPoint].size();
	bool check = false;
	for (int i = 0; i < iVecSize; i++) {
		int loc = (*vec)[iStartPoint][i];
		if (!(*arr)[loc]) {//지나치지 않은 점이라면
			check = true;
			dfs(arr, vec, count + 1, loc);
		}
		if (i == (iVecSize - 1) && check==false) {
			cout <<"ISP" << iStartPoint << endl;
			cout << iVecSize << endl;
			cout << i << " " << check << endl;
			answer = -1;
			return;
		}
	}
	
}

int main() {

	int iPeopleNum;
	cin >> iPeopleNum;
	cin.ignore();

	cin >> iSrc >> iDst;
	cin.ignore();

	int iLoopNum;
	cin >> iLoopNum;
	cin.ignore();

	vector<vector<int>> vec;
	vec.resize(iPeopleNum);

	for (int i = 0; i < iLoopNum; i++) {
		int iInput1, iInput2;
		cin >> iInput1 >> iInput2;
		cin.ignore();

		vec[iInput1-1].push_back(iInput2-1);
		vec[iInput2-1].push_back(iInput1-1);
	}

	for (int i = 0; i < iPeopleNum; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	
	bool* check = new bool[iPeopleNum] {false, };

	dfs(&check, &vec);

	cout << answer;

	return 0;
}