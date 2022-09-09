#include<iostream>
using namespace std;

// 函数的形参列表中可以有占位参数，用来占位，调用函数时必须填补该位置

void func(int a, int) {
	cout << "this is in func" << endl;
}

int main2() {
	func(10, 20);

	system("pause");
	return 0;
}