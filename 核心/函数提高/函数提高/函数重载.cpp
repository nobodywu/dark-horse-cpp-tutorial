#include<iostream>
using namespace std;

// ��������
// ��ͬһ��������
// ��������ͬ
// �����������Ͳ�ͬ���������ͬ����˳��ͬ

// ���ܸ��ݷ���ֵ�������ж��ĸ����������ã�
// ������ͨ���β��б�������غ����ڲ�ʶ���

void func31() {
	cout << "empty" << endl;
}

void func31(int a) {
	cout << "int" << endl;
}

void func31(double a) {
	cout << "double" << endl;
}

int func31(int a, int b) {
	cout << "int + int" << endl;
	return a + b;
}

void func31(int a, double b) {
	cout << "int + double" << endl;
}

void func31(double a, int b) {
	cout << "double + int" << endl;
}

double func31(double a, double b) {
	cout << "double + double" << endl;
	return a + b;
}

// ע������
// 1. ������Ϊ�β�

void func32(int& v) {
	cout << "func32(int& v)�ĵ���" << endl;
	cout << v << endl;
}

void func32(const int& v) {
	cout << "func32(const int& v)�ĵ���" << endl;
	cout << v << endl;
}

// 2. �β�����Ĭ�ϲ���

void func33(int a, int b = 10) {
	cout << "func(int a, int b = 10)�ĵ���" << endl;
}

void func33(int a) {
	cout << "func(int a)�ĵ���" << endl;
}

int main() {
	
	func31();
	func31(1); 
	func31(2.1);
	cout << func31(1, 2) << endl;
	func31(1, 1.2);
	func31(1.4, 1);
	cout << func31(1.4, 1.2) << endl;

	int a = 10;
	func32(a); // ������const
	func32(10); // ������const

	// func33(10); // ������غ���ƥ�䣬��Ҫ����

	system("pause");
	return 0;
}