#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	//1개 덩어리 숫자 분리 방법
	//1. 10씩 나눠서 매번 몫을 빼고 마지막 나머지 더함
	//2. 스트링 파싱

	int iInput;
	cin >> iInput;
	vector<int> numVec;

	while (iInput) {
		numVec.push_back(iInput % 10);
		if ((iInput / 10) > 0) {
			iInput /= 10;
		}
		else {
			break;
		}
	}

	sort(numVec.begin(),numVec.end(),greater<>());

	for (vector<int>::iterator it = numVec.begin();
		it != numVec.end(); it++) {
		cout << *it;
	}


	return 0;
}