#include<iostream>
#include<algorithm>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	pair<int, int> scoreArr[8];

	for (int i = 0; i < 8; i++) {
		int iInput;
		cin >> iInput;
		cin.ignore();
		scoreArr[i] = make_pair(i + 1, iInput);
	}

	sort(scoreArr, scoreArr + 8, [](pair<int, int> a, pair<int, int> b) {
		return a.second < b.second;
	});
	int iFinalScore=0;
	int locArr[5];
	for (int i = 0; i < 5; i++) {
		iFinalScore += scoreArr[7 - i].second;
		locArr[i] = scoreArr[7 - i].first;
	}

	sort(locArr, locArr + 5);

	cout << iFinalScore << endl;
	for (int i = 0; i < 5; i++) {
		cout << locArr[i] << endl;
	}

	return 0;
}