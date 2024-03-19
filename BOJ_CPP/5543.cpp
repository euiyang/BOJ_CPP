#include<iostream>

using namespace std;

void init() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
}

int main() {
	init();
	int iMinFood(2000), iMinDrink(2000);


	for (int i = 0; i < 3; i++) {
		int tmp;
		cin >> tmp;
		cin.ignore();
		if (tmp < iMinFood)iMinFood = tmp;
	}
	for (int i = 0; i < 2; i++) {
		int tmp;
		cin >> tmp;
		cin.ignore();
		if (tmp < iMinDrink)iMinDrink = tmp;
	}

	cout << iMinFood + iMinDrink - 50;

	return 0;
}