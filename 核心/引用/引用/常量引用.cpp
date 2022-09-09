#include<iostream>
using namespace std;

// 相等于const int* const v，指针指向的地、值均不可修改
void showValue(const int& v) {
	// v += 10; // 值不可修改
	cout << v << endl;
}

// 常量引用主要用于防止形参被修改，防止误操作
int main() {

	// 引用需要一个合法的内存空间（10不是合法的地址），此行错误
	// int& a = 10;

	// 加入const，编译器优化代码，
	// int temp = 10;
	// const int& b = temp;
	const int& b = 10;

	int c = 30;
	showValue(c);

	system("pause");
	return 0;

}