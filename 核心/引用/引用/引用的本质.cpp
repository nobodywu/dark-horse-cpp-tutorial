#include<iostream>
using namespace std;

// ���õı�������C++�ڲ���һ��ָ�볣��
void func(int& a) {
	a = 100; // a�����ã�ת��Ϊ*a = 100
}

int main5() {
	int a = 10;

	// �ڲ���int& b�Զ��Զ�ת��Ϊ int* const b = &a��ָ��ָ��ĵ�ַ���ɸ��ġ�Ҳ˵����Ϊʲô���ò��ɸ��ģ�ֻ�ܸ�ֵ
	int& b = a;
	b = 20; // �Զ�ת��Ϊ *b = 20

	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}