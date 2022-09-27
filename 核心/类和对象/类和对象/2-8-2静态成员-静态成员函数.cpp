#include<iostream>
using namespace std;

// 静态成员函数：
// 1. 所有对象共享一个函数
// 2. 静态成员函数只能访问静态成员变量

class Person282 {
public:
	static void func() {
		cout << "func调用" << endl;
		m_A = 100;
		// m_B = 100; // 错误，静态成员函数只能访问静态成员变量
	}

	static int m_A; // 静态成员变量
	int m_B;

private:
	// 外部无法访问
	static void func2() {
		cout << "func2调用" << endl;
	}

};

int Person282::m_A = 10; // 静态成员变量初始化，要有变量类型

void test282() {
	// 1. 通过对象访问静态成员函数
	Person282 p1;
	p1.func();

	// 2. 通过类名访问静态成员函数
	Person282::func();
	// Person282::func2(); // 私有静态成员函数无法访问

}

int main() {
	test282();
	system("pause");
	return 0;
}