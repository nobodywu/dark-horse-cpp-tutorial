#include<iostream>
using namespace std;

int main2() {

	int a = 10;
	int b = 20;

	// �����ڶ���ʱ�����ʼ��
	// int& c;
	int& c = a; // ��ʼ���󲻿ɸ���

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	c = b; // ���Ǹ�ֵ��������ı�a��ֵ

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	system("pause");
	return 0;

}