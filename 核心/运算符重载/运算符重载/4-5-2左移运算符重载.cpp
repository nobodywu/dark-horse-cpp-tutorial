#include<iostream>
using namespace std;

// 左移运算符重载，作用：可以输出自定义数据类型

class Person452 {
	friend ostream& operator<<(ostream& out, Person452& p);
public:
	Person452(int a, int b) {
		this->m_A = a;
		this->m_B = b;
	}

	// 成员函数 实现不了 p << cout 不是我们想要的效果
	// void operator<<(Person452& p){}

private:
	int m_A;
	int m_B;
};

// 全局函数实现左移重载
// ostream对象只能有一个
ostream& operator<<(ostream& out, Person452& p) {
	out << "a: " << p.m_A << "b: " << p.m_B;
	return out;
}

void test452() {
	Person452 p1(10, 20);
	cout << p1 << "hello world" << endl; // 链式编程
}

int main452() {

	test452();

	system("pause");
	return 0;

}

// 总结：重载左移运算符配合友元可以实现输出自定义数据类型