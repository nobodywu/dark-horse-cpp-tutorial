#include<iostream>
using namespace std;

// 空指针可以调用成员函数，但要注意成员函数中是否用到this指针
// 如果用到this指针，则需要在成员函数加以判断，以保证健壮性

class Person433 {
public:
	int m_Age;

	void func1() {
		cout << "func调用" << endl;
	}

	void func2(int age) {
		if (this == NULL) {
			cout << "NULL指针保护" << endl;
			return;
		}
		this->m_Age = age;
	}
};


int main433() {
	Person433* p = NULL;
	p->func1();
	p->func2(20);

	Person433 p1;
	p1.func2(20);
	cout << p1.m_Age << endl;

	system("pause");
	return 0;
}