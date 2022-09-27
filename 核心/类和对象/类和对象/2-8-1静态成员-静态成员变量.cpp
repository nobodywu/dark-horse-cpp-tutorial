#include<iostream>
using namespace std;

// 静态成员就是在成员变量和成员函数前加上关键字static

// 静态成员变量：
// 1. 所有对象共享同一份数据
// 2. 在编译阶段分配内存
// 3. 类内声明，类外初始化

// 静态成员函数：
// 1. 所有对象共享一个函数
// 2. 静态成员函数只能访问静态成员变量

class Person281 {
public:
	static int m_A; // 静态成员变量

	// 静态成员变量：
	// 1. 所有对象共享同一份数据
	// 2. 在编译阶段分配内存
	// 3. 类内声明，类外初始化

private:
	static int m_B; // 外部不可访问
};

// 类内声明静态成员变量，类外初始化
// 要有变量类型
int Person281::m_A = 10;
int Person281::m_B = 20;

void test281() {
	// 静态成员变量两种访问方式

	// 1. 通过对象
	Person281 p1;
	p1.m_A = 100;
	cout << "p1.m_A: " << p1.m_A << endl;

	Person281 p2;
	p2.m_A = 200; // 与p1共享静态成员变量
	cout << "p1.m_A: " << p1.m_A << endl;
	cout << "p2.m_A: " << p2.m_A << endl;

	// 2. 通过类名访问静态变量成员
	cout << "m_A: " << Person281::m_A << endl;
	// cout << "m_B: " << Person281::m_B << endl; // 私有静态成员变量不可访问
}

int main281() {
	test281();
	system("pause");
	return 0;
}