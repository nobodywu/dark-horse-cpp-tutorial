#include<iostream>
using namespace std;

int main4() {
	// ���巽ʽ
	int arr1[2][3];
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	int arr2[2][3] = { {11,22,33},{44,55,66} }; // �ɶ��Ը�
	int arr3[2][3] = { 111,222,333,444,555,666 };
	int arr4[][3] = { 1111,2222,3333,4444,5555,6666 };

	cout << "�����С" << sizeof(arr1) << endl;
	cout << "�����һ�д�С" << sizeof(arr1[0]) << endl;
	cout << "����Ԫ�ش�С" << sizeof(arr1[0][0]) << endl;
	cout << "��������" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "��������" << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
	cout << "�����׵�ַ" << arr1 << endl;
	cout << "�����һ���׵�ַ" << arr1[0] << endl;
	cout << "����ڶ����׵�ַ" << arr1[1] << endl;
	cout << "�����һ��Ԫ�ص�ַ" << &arr1[0][0] << endl;
	cout << "����ڶ���Ԫ�ص�ַ" << &arr1[0][1] << endl;


	system("pause");
	return 0;
}