#include<iostream>
using namespace std;

// ��������ֵΪ���ã����ؾֲ���������
// warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ: a
int& test1() {
	int a = 10;
	return a;

}

int& test2() {
	static int b = 10;
	return b;
}

int main4() {
	
	// ���ܷ��ؾֲ�����������
	int& ref1 = test1();
	cout << ref1 << endl;
	cout << ref1 << endl;

	int& ref2 = test2();
	cout << ref2 << endl;
	cout << ref2 << endl;

	// ������Ϊ��ֵ�����뷵������
	test2() = 30;
	cout << ref2 << endl;
	cout << ref2 << endl;

	system("pause");
	return 0;
}