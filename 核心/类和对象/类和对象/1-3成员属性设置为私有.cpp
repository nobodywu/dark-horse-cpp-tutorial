#include<iostream>
using namespace std;

class Person {
public:
	// ��������
	void setName(string name) {
		m_name = name;
	}

	string getName() {
		return m_name;
	}

	// ��������
	void setAge(int age) {
		if (age < 0 || age > 150) {
			cout << "��������䳬����Χ" << endl;
			return;
		}

		m_age = age;
	}

	// ��ȡ����
	int getAge() {
		return m_age;
	}

	// �������ˣ�����Ϊֻ�����޷���ȡ

	void setLover(string lover) {
		m_lover = lover;
	}

private:
	string m_name;
	int m_age;
	string m_lover;
};


int main3() {

	Person p;
	p.setName("Tom");
	p.setAge(13);
	p.setLover("Cat");

	cout << p.getName() << endl;
	cout << p.getAge() << endl;
	// cout << p.m_lover << endl; // m_loverΪ˽�У���Ȩ�޷���

	system("pause");
	return 0;

}