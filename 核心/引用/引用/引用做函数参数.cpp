#include<iostream>
using namespace std;

void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// ����������������Ч���봫��ַһ��
// ���β�����ʵ��
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}


int main3() {
	int a = 10;
	int b = 20;

	// û�н���
	swap1(a, b);
	cout << a << ", " << b << endl;

	// ��������
	swap2(&a, &b);
	cout << a << ", " << b << endl;

	// ��������
	swap3(a, b);
	cout << a << ", " << b << endl;

	system("pause");
	return 0;
}