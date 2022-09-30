#include<iostream>
using namespace std;

// ��������ظ����������������½��ж��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������

// �Ӻ���������أ����ã�ʵ�������Զ�������������ӵ�����

class Person451 {
public:
	Person451() {};
	Person451(int a, int b) {
		this->m_A = a;
		this->m_B = b;
	}

	// ��Ա����ʵ�����������
	Person451 operator+(const Person451& p) {
		Person451 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}

public:
	int m_A;
	int m_B;
};

// ȫ�ֺ���ʵ�����������
//Person451 operator+(const Person451& p1, const Person451& p2) {
//	Person451 temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

// ��������ؿ��Է�����������
Person451 operator+(const Person451& p2, int val) {
	Person451 temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;

	return temp;
}

void test451() {
	Person451 p1(10, 10);
	Person451 p2(20, 20);

	// ��Ա������ʽ
	Person451 p3 = p1 + p2; // �൱��p2.operator+(p1);
	cout << "p3.m_A: " << p3.m_A << endl;
	cout << "p3.m_B: " << p3.m_B << endl;

	// ��������
	Person451 p4 = p1 + 30; // �൱��operator+(p1, 30);
	cout << "p4.m_A: " << p4.m_A << endl;
	cout << "p4.m_B: " << p4.m_B << endl;
}

int main451() {

	test451();

	system("pause");
	return 0;
}

// �ܽ�1���������õ��������͵ı��ʽ��������ǲ����ܸı��
// �ܽ�2����Ҫ�������������