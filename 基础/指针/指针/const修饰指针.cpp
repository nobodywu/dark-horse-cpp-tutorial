#include<iostream>
using namespace std;

int main3() {
	int a = 10;
	int b = 20;

	// const ��int* ǰ����ʾ *p�Ǹ������������޸�ָ���������ַ���������޸�ָ��ָ���ֵ
	const int* p;
	p = &a;
	cout << "p = " << p << "*p = " << *p << endl;
	p = &b;
	cout << "p = " << p << "*p = " << *p << endl;
	// �����޸�ָ��ָ���ֵ
	// *p = 30; 

	// const ��int* �󣬱�ʾ j ָ���������ַ���Ǹ������������޸ĵ�ַ�������޸�ָ��ָ���ֵ
	int* const j = &a;
	cout << "j = " << j << "*j = " << *j << endl;
	// �����޸ĵ�ַ
	// j = &b;
	*j = 30;
	cout << "j = " << j << "*j = " << *j << endl;

	system("pause");
	return 0;
}