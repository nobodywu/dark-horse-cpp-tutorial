#include<iostream>
using namespace std;

// 在C++中，类的成员变量和成员函数分开存储
// 只有非静态成员变量才存储在类的对象上

class Person431 {
public:
	// 非静态成员变量占对象空间
	int m_A;
	// 静态成员变量不占对象空间
	static int m_B;

	// 无参（默认）构造函数
	Person431() {
		m_A = 10;
	}

	// 函数不占对象空间，所有对象中的函数共享一个函数实例
	static void func1() {
		cout << "非静态成员函数" << endl;
	}

	// 静态成员函数也不占对象空间
	static void func2() {
		cout << "静态成员函数" << endl;
	}
};

int Person431::m_B = 20;

int main431() {
	cout << sizeof(Person431) << endl; // 输出4
	system("pause");
	return 0;
}