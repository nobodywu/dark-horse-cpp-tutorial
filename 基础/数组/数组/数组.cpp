#include <iostream>
using namespace std;

int main1() {

	int arr[] = { 100,90,80,70,60,50,40,30,20,10 };

	cout << "�����СΪ��" << sizeof(arr) << endl;
	cout << "����Ԫ�ش�СΪ��" << sizeof(arr[0]) << endl;
	cout << "�������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "�����׵�ַ��" << arr << endl;
	cout << "�����׵�ַ��" << int(arr) << endl;
	cout << "��һ��Ԫ�ص�ַ��" << int(&arr[0]) << endl;
	cout << "�ڶ���Ԫ�ص�ַ��" << int(&arr[1]) << endl;

	system("pause");
	return 0;
}