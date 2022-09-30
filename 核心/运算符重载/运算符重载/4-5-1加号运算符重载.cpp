#include<iostream>
using namespace std;

// 运算符重载概念：对已有运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

// 加号运算符重载，作用：实现两个自定义数据类型相加的运算

class Person451 {
public:
	Person451() {};
	Person451(int a, int b) {
		this->m_A = a;
		this->m_B = b;
	}

	// 成员函数实现运算符重载
	Person451 operator+(const Person451& p) {
		Person451 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}

public:
	int m_A;
	int m_B;
};

// 全局函数实现运算符重载
//Person451 operator+(const Person451& p1, const Person451& p2) {
//	Person451 temp(0, 0);
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}

// 运算符重载可以发生函数重载
Person451 operator+(const Person451& p2, int val) {
	Person451 temp;
	temp.m_A = p2.m_A + val;
	temp.m_B = p2.m_B + val;

	return temp;
}

void test451() {
	Person451 p1(10, 10);
	Person451 p2(20, 20);

	// 成员函数方式
	Person451 p3 = p1 + p2; // 相当于p2.operator+(p1);
	cout << "p3.m_A: " << p3.m_A << endl;
	cout << "p3.m_B: " << p3.m_B << endl;

	// 函数重载
	Person451 p4 = p1 + 30; // 相当于operator+(p1, 30);
	cout << "p4.m_A: " << p4.m_A << endl;
	cout << "p4.m_B: " << p4.m_B << endl;
}

int main451() {

	test451();

	system("pause");
	return 0;
}

// 总结1：对于内置的数据类型的表达式的运算符是不可能改变的
// 总结2：不要滥用运算符重载