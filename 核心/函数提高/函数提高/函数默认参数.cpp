#include<iostream>
using namespace std;

// �������βο�����Ĭ��ֵ

int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

// 1. ����β�ĳ��λ����Ĭ��ֵ����ô����Ĳ������붼��Ĭ��ֵ
// 2. �������������Ĭ��ֵ���������壨ʵ�֣���ʱ������Ĭ��ֵ
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main1() {
	cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;

	system("pause");
	return 0;
}