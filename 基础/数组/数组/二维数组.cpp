#include<iostream>
using namespace std;

int main4() {
	// 定义方式
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	int arr2[2][3] = { {11,22,33},{44,55,66} }; // 可读性高
	int arr3[2][3] = { 111,222,333,444,555,666 };
	int arr4[][3] = { 1111,2222,3333,4444,5555,6666 };

	cout << "数组大小" << sizeof(arr1) << endl;
	cout << "数组第一行大小" << sizeof(arr1[0]) << endl;
	cout << "数组元素大小" << sizeof(arr1[0][0]) << endl;
	cout << "数组行数" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "数组列数" << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
	cout << "数组首地址" << arr1 << endl;
	cout << "数组第一行首地址" << arr1[0] << endl;
	cout << "数组第二行首地址" << arr1[1] << endl;
	cout << "数组第一个元素地址" << &arr1[0][0] << endl;
	cout << "数组第二个元素地址" << &arr1[0][1] << endl;


	system("pause");
	return 0;
}