//피보나치 함수를 돌리면서 나오는 갯수를 더하면 타임 오버
//피보나치 수열을 사용했을 때 0과 1의 갯수의 규칙을 활용하여
//다음 숫자의 0과 1의 값이 이전 수열(n-1,n-2)에 해당하는 0과 1의 수를 더하면 됨.

#include<iostream>

using namespace std;

int main() {
	int loop_size, num;
	cin >> loop_size;

	pair<int, int> arr[40];

	arr[0] = make_pair(1, 0);
	arr[1] = make_pair(0, 1);
	int index = 1;

	for (int i = 0; i < loop_size; i++) {
		cin >> num;
		if (num > index) {
			for (int j = index + 1; j <= num; j++) {
				arr[j] = make_pair(arr[j - 1].first + arr[j - 2].first, arr[j - 1].second + arr[j - 2].second);
			}
		}

		cout << arr[num].first << " " << arr[num].second << endl;

	}

	return 0;
}
