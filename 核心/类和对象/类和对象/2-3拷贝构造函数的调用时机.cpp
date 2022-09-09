#include<iostream>
using namespace std;

// 拷贝构造函数的调用时机：
// 1. 使用一个已经创建完毕的对象来初始化一个新对象
// 2. 值传递的方式给函数参数传值，函数形参是对象
// 3. 以值方式返回局部对象，函数返回值是对象

class Person23 {
public:
	// 无参构造函数
	Person23() {
		m_age = 0;
		cout << "无参构造函数" << endl;
	}

	// 有参构造函数
	Person23(int age) {
		m_age = age;
		cout << "有参构造函数" << endl;
	}

	// 拷贝构造函数
	Person23(const Person23& p) {
		m_age = p.m_age;
		cout << "拷贝构造函数" << endl;
	}

	// 析构函数
	~Person23() {
		cout << "析构函数" << endl;
	}

private:
	int m_age;
};

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test231() {
	cout << "test231" << endl;
	Person23 p1(100); // p1已经创建完毕
	Person23 p2(p1); // 调用拷贝构造函数
	Person23 p3 = p1; // 调用拷贝构造函数

	// Person p4;
	// p4 = p1; // 不是调用拷贝构造函数，是赋值操作 ？不太懂
}

// 2. 值传递的方式给函数参数传值
// 相当于 Person p1 = p;
void doWork231(Person23 p1) {
	cout << "doWork231" << endl;
}
void test232() {
	cout << "test232" << endl;
	Person23 p5;
	doWork231(p5);
}

// 3. 以值方式返回局部对象
Person23 doWork232() {
	cout << "doWork232" << endl;
	Person23 p6;
	cout << (int*)&p6 << endl;
	return p6;
}
void test233() {
	cout << "test233" << endl;
	Person23 p7 = doWork232();
	cout << (int*)&p7 << endl;
}

int main23() {
	test231();
	test232();
	test233();

	system("pause");
	return 0;
}