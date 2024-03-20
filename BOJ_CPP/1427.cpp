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
	//1�� ��� ���� �и� ���
	//1. 10�� ������ �Ź� ���� ���� ������ ������ ����
	//2. ��Ʈ�� �Ľ�

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