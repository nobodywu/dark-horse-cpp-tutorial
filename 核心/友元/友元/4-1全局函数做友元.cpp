#include<iostream>
using namespace std;

// 背景：
// 生活中，家里有客厅（Public）和卧室（Private）
// 客厅所有来的客人都可以进去，但是卧室是私有的，只有自己能进去
// 但是，卧室可以允许好基友进去

// 在程序里，有些私有属性，也想让类外特殊的函数或类进行访问，就需要用到友元
// 友元的目的就是让一个函数或类，访问灵台一个类中的私有成员
// 友元的关键词为 friend
// 友元的三种实现：
// 1. 全局函数做友元
// 2. 类做友元
// 3. 成员函数做友元

// 全局函数做友元

class Building441 {
	// 告诉编译器 全局函数goodGay441 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGay441(Building441* building);

public:

	Building441() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";

	}

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

void goodGay441(Building441* building) {
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;

}


int main441() {
	Building441 b;
	goodGay441(&b);

	system("pause");
	return 0;
}