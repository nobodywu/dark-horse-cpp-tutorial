#include<iostream>
using namespace std;

// ��̬��Ա������
// 1. ���ж�����һ������
// 2. ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person282 {
public:
	static void func() {
		cout << "func����" << endl;
		m_A = 100;
		// m_B = 100; // ���󣬾�̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	}

	static int m_A; // ��̬��Ա����
	int m_B;

private:
	// �ⲿ�޷�����
	static void func2() {
		cout << "func2����" << endl;
	}

};

int Person282::m_A = 10; // ��̬��Ա������ʼ����Ҫ�б�������

void test282() {
	// 1. ͨ��������ʾ�̬��Ա����
	Person282 p1;
	p1.func();

	// 2. ͨ���������ʾ�̬��Ա����
	Person282::func();
	// Person282::func2(); // ˽�о�̬��Ա�����޷�����

}

int main() {
	test282();
	system("pause");
	return 0;
}