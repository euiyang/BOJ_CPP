//�Ǻ���ġ �Լ��� �����鼭 ������ ������ ���ϸ� Ÿ�� ����
//�Ǻ���ġ ������ ������� �� 0�� 1�� ������ ��Ģ�� Ȱ���Ͽ�
//���� ������ 0�� 1�� ���� ���� ����(n-1,n-2)�� �ش��ϴ� 0�� 1�� ���� ���ϸ� ��.

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
