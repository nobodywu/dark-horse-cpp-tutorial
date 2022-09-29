#include<iostream>
using namespace std;

// 常函数：
// 1. 成员函数后加const，我们称该函数为常函数
// 2. 常函数内不可修改成员属性
// 3. 成员属性声明时加关键词mutable后，在常函数中可以修改

// 常对象
// 1. 声明对象前加const，称该对象为常对象
// 2. 常对象只能调用常函数

class Person434 {
public:
	Person434() {
		m_A = 0;
		m_B = 0;
	}

	// this指针的本质是一个指针常量，指针的指向不可修改
	// 如果想让指针指向的值也不可修改，需要声明常函数
	void showPerson() const {
		// const 类型* const pointer
		// this = NULL; // 指针指向不能修改，this指针指向的数据可以修改
		// this->m_A = 100; // 不是mutable修饰的成员变量
		// 常函数内值可以修改mutable修饰的成员变量
		this->m_B = 200;

	}

	void myFunc1() const {
		// m_A = 100; // 不是mutable修饰的成员变量
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
	const Person434 p; // 常量对象
	cout << p.m_A << endl;
	// p.m_A = 100; // 常量对象不能修改成员变量的值
	p.m_B = 300; // 但是常对象可以修改mutable修饰的成员变量

	// 常对象访问成员函数
	p.myFunc1();
	// p.myFunc2(); // 常对象只能调用常函数
}

int main() {
	test434();
	system("pause");
	return 0;
}