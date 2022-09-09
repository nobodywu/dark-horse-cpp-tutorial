#include<iostream>
using namespace std;

int main3() {
	int a = 10;
	int b = 20;

	// const 在int* 前，表示 *p是个常量，可以修改指针变量（地址），不能修改指针指向的值
	const int* p;
	p = &a;
	cout << "p = " << p << "*p = " << *p << endl;
	p = &b;
	cout << "p = " << p << "*p = " << *p << endl;
	// 不能修改指针指向的值
	// *p = 30; 

	// const 在int* 后，表示 j 指针变量（地址）是个常量，不能修改地址，可以修改指针指向的值
	int* const j = &a;
	cout << "j = " << j << "*j = " << *j << endl;
	// 不能修改地址
	// j = &b;
	*j = 30;
	cout << "j = " << j << "*j = " << *j << endl;

	system("pause");
	return 0;
}