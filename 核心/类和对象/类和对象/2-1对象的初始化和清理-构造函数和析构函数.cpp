#include<iostream>
using namespace std;

// 对象或变量没有初始化，使用后果是未知的
// 对象或变量在使用之后没有及时清理，会造成一定的安全问题

// C++利用构造函数和析构函数解决上述问题

// 对象的初始化和清理工作是编译器强制要求做的事情，如果我们不提供构造和析构，编译器将会提供
// 编译器提供的构造函数和析构函数是空实现

// 构造函数：主要作用于创建对象时为对象的成员属性赋值，构造函数有编译器自动调用，无需手动调用。
// 析构函数：主要作用域在对象销毁前系统自动调用，执行一些清理工作。

// 构造函数语法：类名(){}
// 1. 构造函数没有返回值，不写void
// 2. 函数名称与类名相同
// 3. 构造函数可以有参数，因此可以发生重载
// 4. 程序在调用对象时会自动调用构造函数，且只会调用一次。无需手动调用

// 析构函数语法：~类名(){}
// 1. 析构函数没有返回值，不写void
// 2. 函数名与类名相同，在函数前加~
// 3. 析构函数不可以有参数，因此不可以发生重载
// 4. 程序在对象销毁前会自动调用析构函数，且只会调用一次。无需手动调用

class Person21 {
public:
	// 构造函数
	Person21() {
		cout << "Person构造函数" << endl;
	}

	// 析构函数
	~Person21() {
		cout << "Person析构函数" << endl;
	}
};

void test01() {
	Person21 p21;
}

int main21() {
	// 对象p21在完成test01调用后自动销毁
	test01();

	system("pause");
	return 0;
}