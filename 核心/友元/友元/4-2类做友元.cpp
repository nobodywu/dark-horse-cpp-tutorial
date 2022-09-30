#include<iostream>
using namespace std;

class Building442;

class Gay442 {
public:
	Gay442();
	void visit();

private:
	Building442* building;
};

class Building442 {
	// 告诉编译器 Gay442类是Building类的好朋友，可以访问到Building中私有内容
	friend class Gay442;

public:
	Building442();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

// 在类外定义函数实现
Building442::Building442() {
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

Gay442::Gay442() {
	building = new Building442;
}

void Gay442::visit() {
	cout << "Gay正在访问" << building->m_SittingRoom << endl;
	cout << "Gay正在访问" << building->m_BedRoom << endl;  // 访问Building类的私有成员变量
}

int main442() {
	Gay442 g;
	g.visit();

	system("pause");
	return 0;
}