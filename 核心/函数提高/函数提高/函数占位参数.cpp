#include<iostream>
using namespace std;

// �������β��б��п�����ռλ����������ռλ�����ú���ʱ�������λ��

void func(int a, int) {
	cout << "this is in func" << endl;
}

int main2() {
	func(10, 20);

	system("pause");
	return 0;
}