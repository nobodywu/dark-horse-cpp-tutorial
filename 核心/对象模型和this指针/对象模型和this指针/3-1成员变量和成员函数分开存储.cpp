#include<iostream>
using namespace std;

// ��C++�У���ĳ�Ա�����ͳ�Ա�����ֿ��洢
// ֻ�зǾ�̬��Ա�����Ŵ洢����Ķ�����

class Person431 {
public:
	// �Ǿ�̬��Ա����ռ����ռ�
	int m_A;
	// ��̬��Ա������ռ����ռ�
	static int m_B;

	// �޲Σ�Ĭ�ϣ����캯��
	Person431() {
		m_A = 10;
	}

	// ������ռ����ռ䣬���ж����еĺ�������һ������ʵ��
	static void func1() {
		cout << "�Ǿ�̬��Ա����" << endl;
	}

	// ��̬��Ա����Ҳ��ռ����ռ�
	static void func2() {
		cout << "��̬��Ա����" << endl;
	}
};

int Person431::m_B = 20;

int main431() {
	cout << sizeof(Person431) << endl; // ���4
	system("pause");
	return 0;
}