#include<iostream>
using namespace std;

class Person24 {
public:
	// 无参（默认）构造函数
	Person24() {
		m_age = 0;
		cout << "无参构造函数" << endl;
	}

	// 有参构造函数
	Person24(int age) {
		m_age = age;
		cout << "有参构造函数" << endl;
	}

	// 拷贝构造函数
	Person24(const Person24& p) {
		m_age = p.m_age;
		cout << "拷贝构造函数" << endl;
	}

	// 析构函数
	~Person24() {
		cout << "析构函数" << endl;
	}

public:
	int m_age;
};

// 构造函数调用规则：
// 1. 默认构造函数。无参，函数体为空
// 2. 默认析构函数。无参，函数体为空
// 3. 默认拷贝构造函数，对属性进行值拷贝

// 构造函数定义规则如下：
// 1. 如果用户定义有参构造函数，C++不再提供默认无参构造，但会提供默认拷贝构造
// 2. 如果用户定义拷贝构造函数，C++不再提供其他构造函数

void test241() {
	Person24 p1(18);
	// 如果不写拷贝构造，编译器会自动添加拷贝构造，并且做浅拷贝
	Person24 p2(p1);

	cout << "p2的年龄为：" << p2.m_age << endl;

}

void test242() {
	// 如果用户提供有参构造，编译器不会提供无参（默认）构造，会提供拷贝构造
	Person24 p1; // 此时如果用户没有提供无参（默认）构造，会出错
	Person24 p2(10); // 用户提供有参构造
	Person24 p3(p2); // 此时如果用户没有提供，编译器会提供

	// 如果用户提供拷贝构造
	Person24 p4; // 此时如果用户没有提供无参（默认）构造，会出错
	Person24 p5(10); // 此时如果用户没有提供有参构造，会出错
	Person24 p6(p5); // 用户提供拷贝构造

}

int main24() {
	test241();
	test242();
	system("pause");
	return 0;

}