#include<iostream>
using namespace std;

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 引用做函数参数，效果与传地址一样
// 让形参修饰实参
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main3() {
	int a = 10;
	int b = 20;

	// 没有交换
	swap1(a, b);
	cout << a << ", " << b << endl;

	// 发生交换
	swap2(&a, &b);
	cout << a << ", " << b << endl;

	// 发生交换
	swap3(a, b);
	cout << a << ", " << b << endl;

	system("pause");
	return 0;
}