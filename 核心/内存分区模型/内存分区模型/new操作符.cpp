#include<iostream>
using namespace std;

int* func() {
	int* p = new int(11);
	return p;
}

int main() {

	int* a;
	a = func();

	cout << *a << endl;

	delete a;
	// 堆区的数据已被释放，内存不可访问，将会报错，程序终止
	// cout << *a << endl;

	// 堆区开辟数组
	// 使用new[]为数组分配内存地址
	int* arr = new int[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	};

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	};

	// 释放数组，delete后要加[]
	delete[] arr;

	system("pause");
	return 0;

}