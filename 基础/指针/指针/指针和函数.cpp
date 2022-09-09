#include<iostream>
using namespace std;

void swap1(int aa, int bb) {
	int temp = aa;
	aa = bb;
	bb = temp;
}

// 利用指针作为函数参数，可以修改实参的值
void swap2(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main5() {
	int a = 10;
	int b = 20;

	cout << "a = " << a << ", b = " << b << endl;

	swap1(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	// 传地址会改变a, b的值
	swap2(&a, &b);
	cout << "a = " << a << ", b = " << b << endl;

	system("pause");
	return 0;
}