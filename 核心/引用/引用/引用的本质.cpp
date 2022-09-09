#include<iostream>
using namespace std;

// 引用的本质是在C++内部的一个指针常量
void func(int& a) {
	a = 100; // a是引用，转换为*a = 100
}

int main5() {
	int a = 10;

	// 内部将int& b自动自动转化为 int* const b = &a，指针指向的地址不可更改。也说明了为什么引用不可更改，只能赋值
	int& b = a;
	b = 20; // 自动转换为 *b = 20

	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}