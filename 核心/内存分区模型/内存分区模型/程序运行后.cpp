#include<iostream>
using namespace std;

// ջ��
// �ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ�������
int* func1()
{
	int c = 20;
	// ���ܷ��ؾֲ������ĵ�ַ
	// warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ: c
	// return &c;

	// ���Է��ؾ�̬�����ĵ�ַ
	static int b = 10;
	return &b;
}

int main11() {

	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}

// ����
// �ɳ���Ա�����ͷš��������Ա���ͷţ��������н������ɲ���ϵͳ�ͷ�
int* func2()
{
	int* a = new int(10);
	return a;
}

int main22() {

	int* p = func2();

	cout << *p << endl;
	cout << *p << endl;

	system("pause");

	return 0;
}