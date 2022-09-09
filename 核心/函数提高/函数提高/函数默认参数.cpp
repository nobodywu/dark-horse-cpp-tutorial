#include<iostream>
using namespace std;

// 函数的形参可以有默认值

int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

// 1. 如果形参某个位置有默认值，那么往后的参数必须都有默认值
// 2. 如果函数声明有默认值，函数定义（实现）的时候不能有默认值
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main1() {
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;

	system("pause");
	return 0;
}