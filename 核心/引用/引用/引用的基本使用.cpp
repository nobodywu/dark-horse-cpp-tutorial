#include<iostream>
using namespace std;

// ���õ��﷨�� ��������& ���� = ԭ��
// Ϊ����ȡ����
int main1() {

	int a = 32;
	int& b = a;

	cout << a << endl;
	cout << b << endl;

	a = 42;
	cout << b << endl;

	system("pause");
	return 0;

}