#include<iostream>
using namespace std;

// 函数返回值为引用，返回局部变量引用
// warning C4172: 返回局部变量或临时变量的地址: a
int& test1() {
	int a = 10;
	return a;

}

int& test2() {
	static int b = 10;
	return b;
}

int main4() {
	
	// 不能返回局部变量的引用
	int& ref1 = test1();
	cout << ref1 << endl;
	cout << ref1 << endl;

	int& ref2 = test2();
	cout << ref2 << endl;
	cout << ref2 << endl;

	// 函数作为左值，必须返回引用
	test2() = 30;
	cout << ref2 << endl;
	cout << ref2 << endl;

	system("pause");
	return 0;
}