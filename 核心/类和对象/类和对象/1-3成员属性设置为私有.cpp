#include<iostream>
using namespace std;

class Person {
public:
	// 设置姓名
	void setName(string name) {
		m_name = name;
	}

	string getName() {
		return m_name;
	}

	// 设置年龄
	void setAge(int age) {
		if (age < 0 || age > 150) {
			cout << "输入的年龄超出范围" << endl;
			return;
		}

		m_age = age;
	}

	// 获取年龄
	int getAge() {
		return m_age;
	}

	// 设置情人，情人为只读，无法获取

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
	// cout << p.m_lover << endl; // m_lover为私有，无权限访问

	system("pause");
	return 0;

}