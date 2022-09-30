#include<iostream>
using namespace std;

// 递增运算符重载，作用：用类实现自己的整形数据

class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger myint);

public:
	MyInteger() {
		m_Num = 0;
	}

	// 前置++
	MyInteger& operator++() {
		// 先++
		m_Num++;
		return *this;
	}

	// 后置++
	MyInteger operator++(int) {
		// 记录当前本身的值，让后让本身的值加1
		// 但是返回的是以前的值，达到先返回后++
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyInteger myint) {
	out << myint.m_Num;
	return out;
}

// 前置++，先++，再返回
void test01() {
	MyInteger myInt;
	cout << ++myInt << endl;
}

int main() {
	system("pause");
	return 0;
}