#include<iostream>
using namespace std;

class C1 {
	int m_A; // Ĭ��˽��Ȩ��
};

struct C2 {
	int m_B; // Ĭ�Ϲ���Ȩ��
};

int main2() {

	C1 c1;
	C2 c2;

	// c1.m_A = 10; // ���󣬷���Ȩ����˽�е�
	c2.m_B = 20; // ��ȷ������Ȩ���ǹ�����

	cout << c2.m_B << endl;

	system("pause");
	return 0;

}