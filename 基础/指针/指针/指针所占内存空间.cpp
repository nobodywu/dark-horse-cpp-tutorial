#include<iostream>
using namespace std;

int main2() {
	// 所有指针变量在32位操作系统的大小为4字节，在64为操作系统为8字节
	cout << "char * 的大小为：" << sizeof(char*) << endl;
	cout << "int * 的大小为：" << sizeof(int*) << endl;
	cout << "float * 的大小为：" << sizeof(float*) << endl;
	cout << "double * 的大小为：" << sizeof(double*) << endl;
	system("pause");
	return 0;
}