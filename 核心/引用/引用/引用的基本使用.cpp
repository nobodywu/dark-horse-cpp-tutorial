#include<iostream>
using namespace std;

// 引用的语法： 数据类型& 别名 = 原名
// 为变量取别名
int main1() {

	int a = 32;
	int& b = a;

	cout << a << endl;
	cout << b << endl;

	a = 42;
	cout << b << endl;

	system("pause");
	return 0;

}