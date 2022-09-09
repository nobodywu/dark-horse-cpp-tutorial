#include<iostream>
#include<cmath>
using namespace std;

int main2() {

	int num = 100;
	int i = -1;
	int j = -1;
	int k = -1;

	do {
		// cout << "num = " << num << endl;
		i = num / 100;
		j = num % 100 / 10;
		k = num % 10;

		// cout << i << "," << j << "," << k << "," << pow(i, 3) + pow(j, 3) + pow(k, 3) << endl;

		// 比较运算符级别高于算术运算符
		// pow在cmath
		if ((pow(i, 3) + pow(j, 3) + pow(k, 3)) == num) {
			cout << "yes" << num << endl;
		}

		num++;


	} while (num <= 999);


	system("pause");
	return 0;
}