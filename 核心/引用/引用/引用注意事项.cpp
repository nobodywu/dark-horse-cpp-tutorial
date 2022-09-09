#include<iostream>
using namespace std;

int main2() {

	int a = 10;
	int b = 20;

	// 引用在定义时必须初始化
	// int& c;
	int& c = a; // 初始化后不可更改

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	c = b; // 这是赋值操作，会改变a的值

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("pause");
	return 0;

}