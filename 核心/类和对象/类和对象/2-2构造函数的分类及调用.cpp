#include<iostream>
using namespace std;

// ���캯�����ַ��ࣺ
// ��������Ϊ���вι�����޲ι���
// �����ͷ�Ϊ����ͨ����Ϳ�������

class Person22 {
public:

	Person22() {
		m_age = 10;
		cout << "Person21 �޲ι��캯��" << endl;
	}

	Person22(int age) {
		m_age = age;
		cout << "Person22 �вι��캯��" << endl;
	}

	Person22(const Person22& p) {
		m_age = p.m_age;
		cout << "Person22 �������캯��" << endl;
	}

	~Person22() {
		cout << "Person22 ��������" << endl;
	}

	int getAge() {
		return m_age;
	}

private:
	int m_age;
};

void test02() {
	// ��ʼ������1
	// ��������ʱ�����вι��캯��
	Person22 p1(11);
	cout << "p1 age: " << p1.getAge() << endl;
	// ��������ʱ�����޲ι��캯��
	// ע��1�����ܼ�����Person22 p2()���󣬱�������Ϊ�Ǻ�������
	Person22 p2;
	cout << "p2 age: " << p2.getAge() << endl;

	// ��ʼ������2 ��ʾ����
	Person22 p3 = Person22(13);
	cout << "p3 age: " << p3.getAge() << endl;
	Person22 p4 = Person22(p1);
	cout << "p4 age: " << p4.getAge() << endl;

	// ��ʼ������3 ��ʽת����
	Person22 p5 = 15;
	cout << "p5 age: " << p5.getAge() << endl;
	Person22 p6 = p1;
	cout << "p6 age: " << p6.getAge() << endl;

	// ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ������� ����̫��
	// Person22 p7(p1);
}

int main22() {
	test02();
	system("pause");
	return 0;
}