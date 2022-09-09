#include <iostream>
using namespace std;

int main1() {

	int arr[] = { 100,90,80,70,60,50,40,30,20,10 };

	cout << "数组大小为：" << sizeof(arr) << endl;
	cout << "数组元素大小为：" << sizeof(arr[0]) << endl;
	cout << "数组个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "数组首地址：" << arr << endl;
	cout << "数组首地址：" << int(arr) << endl;
	cout << "第一个元素地址：" << int(&arr[0]) << endl;
	cout << "第二个元素地址：" << int(&arr[1]) << endl;

	system("pause");
	return 0;
}