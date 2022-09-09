#include<iostream>
using namespace std;

// 栈区
// 由编译器自动分配释放，存放函数的参数值，局部变量等
int* func1()
{
	int c = 20;
	// 不能返回局部变量的地址
	// warning C4172: 返回局部变量或临时变量的地址: c
	// return &c;

	// 可以返回静态变量的地址
	static int b = 10;
	return &b;
}

int main11() {

	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}

// 堆区
// 由程序员分配释放。如果程序员不释放，程序运行结束后由操作系统释放
int* func2()
{
	int* a = new int(10);
	return a;
}

int main22() {

	int* p = func2();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}