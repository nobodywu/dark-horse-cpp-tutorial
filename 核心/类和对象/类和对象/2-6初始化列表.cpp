#include<iostream>
using namespace std;

// �﷨���вι��캯��(����1, ����2, ����3):����1(����1), ����2(����2), ����3(����3){}

class Person26 {
public:
	// �޲Σ�Ĭ�ϣ����캯��
	Person26() {
		cout << "�޲ι��캯��" << endl;
	}

	// �вι��캯������ͳ��ʽ��ʼ��
	//Person26(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//	cout << "�вι��캯������ͳ��ʽ��ʼ��" << endl;
	//}

	// �вι��캯�����б�ʽ��ʼ��
	Person26(int a, int b, int c):m_A(a),m_B(b),m_C(c){
		cout << "�вι��캯�����б�ʽ��ʼ��" << endl;
	}

public:
	int m_A;
	int m_B;
	int m_C;
};

void test261() {
	int a = 2;
	int b = 4;
	int c = 6;

	Person26 p(a, b, c);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
}

int main26() {
	test261();
	system("pause");
	return 0;
}