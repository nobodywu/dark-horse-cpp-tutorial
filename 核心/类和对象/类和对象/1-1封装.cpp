#include<iostream>
#include<string>
using namespace std;

// C++������������ص㣺��װ�����ɣ���̬
// ���������Ժ���Ϊ��������

// ��װ
// �﷨�� class ���� { Ȩ��:  ���� / ��Ϊ };


// ��װ����һ��������ʱ�����Ժ���Ϊһ�𣬱�������

// ʾ��1����װһ��Բ�࣬���ԣ��뾶����Ϊ�������ܳ������
const double PI = 3.24;

class Circle {
public:

	// ���ԣ��뾶
	int m_r; // �뾶

	// ��Ϊ�������ܳ�
	double calcPeri() {
		return 2 * PI * m_r;
	}

	// ��Ϊ���������
	double calcArea() {
		return PI * m_r * m_r;
	}
};

// ʾ��2����װһ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class Student {
public:
	string m_name;
	int m_id;

	void setName(string name) {
		m_name = name;
	}

	void setID(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "name = " << m_name << endl;
		cout << "id = " << m_id << endl;
	}
};

int main1() {

	Circle c1;
	c1.m_r = 9;

	cout << c1.calcPeri() << endl;
	cout << c1.calcArea() << endl;

	Student stu1;
	stu1.setName("����");
	stu1.setID(21);
	stu1.showStudent();

	system("pause");
	return 0;
}