#include<iostream>
using namespace std;

// �������캯���ĵ���ʱ����
// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
// 2. ֵ���ݵķ�ʽ������������ֵ�������β��Ƕ���
// 3. ��ֵ��ʽ���ؾֲ����󣬺�������ֵ�Ƕ���

class Person23 {
public:
	// �޲ι��캯��
	Person23() {
		m_age = 0;
		cout << "�޲ι��캯��" << endl;
	}

	// �вι��캯��
	Person23(int age) {
		m_age = age;
		cout << "�вι��캯��" << endl;
	}

	// �������캯��
	Person23(const Person23& p) {
		m_age = p.m_age;
		cout << "�������캯��" << endl;
	}

	// ��������
	~Person23() {
		cout << "��������" << endl;
	}

private:
	int m_age;
};

// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test231() {
	cout << "test231" << endl;
	Person23 p1(100); // p1�Ѿ��������
	Person23 p2(p1); // ���ÿ������캯��
	Person23 p3 = p1; // ���ÿ������캯��

	// Person p4;
	// p4 = p1; // ���ǵ��ÿ������캯�����Ǹ�ֵ���� ����̫��
}

// 2. ֵ���ݵķ�ʽ������������ֵ
// �൱�� Person p1 = p;
void doWork231(Person23 p1) {
	cout << "doWork231" << endl;
}
void test232() {
	cout << "test232" << endl;
	Person23 p5;
	doWork231(p5);
}

// 3. ��ֵ��ʽ���ؾֲ�����
Person23 doWork232() {
	cout << "doWork232" << endl;
	Person23 p6;
	cout << (int*)&p6 << endl;
	return p6;
}
void test233() {
	cout << "test233" << endl;
	Person23 p7 = doWork232();
	cout << (int*)&p7 << endl;
}

int main23() {
	test231();
	test232();
	test233();

	system("pause");
	return 0;
}