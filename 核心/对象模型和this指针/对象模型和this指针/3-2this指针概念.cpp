#include<iostream>
using namespace std;

// 通过3-1知道成员变量和成员函数是分开存储的
// 每一个非静态成员函数只会产生一个函数实例，也就是多个同类型的对象会共用一块代码
// 问题：如何区分这一块代码是哪个对象调用？
// C++通过this指针解决这个问题，this指针指向被调用的成员函数所属的对象
// this指针是隐含在每一个非静态成员函数内的一种指针
// this指针不需要定义，可以直接使用

// 用途：
// 1. 当形参和成员变量重名时，可以使用this来区分
// 2. 在类的非静态成员函数中返回对象本身，使用return *this

class Person432 {
public:
	int age;

	// 有参构造函数
	Person432(int age) {
		this->age = age;
	}

	Person432& PersonAddPerson(Person432 p) {
		this->age += p.age;
		return *this;
	}
};

int main432() {
	Person432 p1(10);
	cout << p1.age << endl;

	Person432 p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1);
	cout << p2.age << endl;

	system("pause");
	return 0;
}