#include<iostream>

using namespace std;

bool** arr;
int hor,ver;

void searchArr(int y, int x) {
	arr[y][x] = false;

	// ������ �Ǵ� �Ʒ� �������� 1�� ������ ��, ���� �Ǵ� ������ ũ�Ⱑ �迭�� 
	// ũ�⸦ ����ų� �ش� ��ġ�� true ���� �̾����� ������ ����
	if (((x + 1) < hor) && arr[y][x + 1]) {
		cout << "x ���� ���� ��ǥ:" << x + 1 << " " << y << endl;
		return searchArr(y, x + 1);
	}
	else cout << "x ���� Ż�� ��ǥ:" << x + 1 << " " << y << endl;

	if (((y + 1) < ver) && arr[y + 1][x]) {
		cout << "x ���� ���� ��ǥ:" << x + 1 << " " << y << endl;
		return searchArr(y + 1, x);
	}
	else cout << "y ���� Ż�� ��ǥ:" << x  << " " << y+1 << endl;

	return;
}

int main() {

	int loop_size;
	cin >> loop_size;

	for (int i = 0; i < loop_size; i++) {
		int num;
		cin >> hor >> ver>>num;

		//������ �迭 ����
		arr = new bool* [ver];
		for (int j = 0; j < ver; j++) {
			arr[j] = new bool[hor];
		}


		//�迭�� ���� ��ġ ǥ��
		int m, n;
		for (int j = 0; j < num; j++) {
			cin >> m >> n;
			arr[n][m] = true;
		}

		cout << boolalpha;

		for (int j = 0; j < ver;j++) {
			for (int k = 0; k < hor; k++) {
				cout << arr[j][k] << '\t';
			}
			cout << endl;
		}

		int count = 0;

		//�迭�� ��ü ��ȸ�ϸ鼭 true ���� ������ count+1��
		// �ش� ��ġ���� ����� true ��Ͽ� ����
		// ����Լ��� false�� ��ȯ
		
		for (int j = 0; j < ver; j++) {
			for (int k = 0; k < hor; k++) {
				if (arr[j][k] == true) {
					cout << "���� ��ġ" << k << " " << j << endl;
					count++;
					searchArr(j, k);
				}
			}
		}

		cout << count << endl;
	}

	return 0;
}