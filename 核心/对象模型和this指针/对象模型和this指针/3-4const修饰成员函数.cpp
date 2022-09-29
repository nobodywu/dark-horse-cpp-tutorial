#include<iostream>
using namespace std;

// ��������
// 1. ��Ա�������const�����ǳƸú���Ϊ������
// 2. �������ڲ����޸ĳ�Ա����
// 3. ��Ա��������ʱ�ӹؼ���mutable���ڳ������п����޸�

// ������
// 1. ��������ǰ��const���Ƹö���Ϊ������
// 2. ������ֻ�ܵ��ó�����

class Person434 {
public:
	Person434() {
		m_A = 0;
		m_B = 0;
	}

	// thisָ��ı�����һ��ָ�볣����ָ���ָ�򲻿��޸�
	// �������ָ��ָ���ֵҲ�����޸ģ���Ҫ����������
	void showPerson() const {
		// const ����* const pointer
		// this = NULL; // ָ��ָ�����޸ģ�thisָ��ָ������ݿ����޸�
		// this->m_A = 100; // ����mutable���εĳ�Ա����
		// ��������ֵ�����޸�mutable���εĳ�Ա����
		this->m_B = 200;

	}

	void myFunc1() const {
		// m_A = 100; // ����mutable���εĳ�Ա����
		cout << "void myFunc1() const" << endl;

	}

	void myFunc2() {
		cout << "void myFunc2()" << endl;

	}


public:
	int m_A;
	mutable int m_B;
};

void test434() {
	const Person434 p; // ��������
	cout << p.m_A << endl;
	// p.m_A = 100; // �����������޸ĳ�Ա������ֵ
	p.m_B = 300; // ���ǳ���������޸�mutable���εĳ�Ա����

	// ��������ʳ�Ա����
	p.myFunc1();
	// p.myFunc2(); // ������ֻ�ܵ��ó�����
}

int main() {
	test434();
	system("pause");
	return 0;
}