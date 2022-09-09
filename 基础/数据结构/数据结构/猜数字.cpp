#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main1() {
	srand((unsigned)time(NULL));
	int num = rand() % 101; // 生成 1-100之间的随机数
	int guess = -1;
	

	while (true) {
		
		cout << "please input guess(1 - 100, integer); " << endl;
		cin >> guess;


		if (num == guess) {
			cout << "congrats!" << endl;
			break;
		}
		else if (num < guess) {
			cout << "input is greater than num" << endl;
		}
		else {
			cout << "input is less than num" << endl;
		}

	}
	

	system("pause");
	return 0;
}