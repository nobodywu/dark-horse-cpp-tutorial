#include<iostream>
using namespace std;

// 函数重载
// 在同一作用域下
// 函数名相同
// 函数参数类型不同，或个数不同，或顺序不同

// 不能根据返回值的类型判断哪个函数被调用，
// 编译器通过形参列表给予重载函数内部识别号

void func31() {
	cout << "empty" << endl;
}

void func31(int a) {
	cout << "int" << endl;
}

void func31(double a) {
	cout << "double" << endl;
}

int func31(int a, int b) {
	cout << "int + int" << endl;
	return a + b;
}

void func31(int a, double b) {
	cout << "int + double" << endl;
}

void func31(double a, int b) {
	cout << "double + int" << endl;
}

double func31(double a, double b) {
	cout << "double + double" << endl;
	return a + b;
}

// 注意事项
// 1. 引用作为形参

void func32(int& v) {
	cout << "func32(int& v)的调用" << endl;
	cout << v << endl;
}

void func32(const int& v) {
	cout << "func32(const int& v)的调用" << endl;
	cout << v << endl;
}

// 2. 形参中有默认参数

void func33(int a, int b = 10) {
	cout << "func(int a, int b = 10)的调用" << endl;
}

void func33(int a) {
	cout << "func(int a)的调用" << endl;
}

int main() {
	
	func31();
	func31(1); 
	func31(2.1);
	cout << func31(1, 2) << endl;
	func31(1, 1.2);
	func31(1.4, 1);
	cout << func31(1.4, 1.2) << endl;

	int a = 10;
	func32(a); // 调用无const
	func32(10); // 调用有const

	// func33(10); // 多个重载函数匹配，需要避免

	system("pause");
	return 0;
}