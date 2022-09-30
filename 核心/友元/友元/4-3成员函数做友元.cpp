#include<iostream>
using namespace std;

class Building443;
class Gay443 {
public:
	Gay443();
	void visit1();
	void visit2();

private:
	Building443* building;
};

class Building443 {
	// 告诉编译器 Gay443类 中的visit成员函数是 Building443 的好朋友，可以访问私有内容
	friend void Gay443::visit1();

public:
	Building443();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building443::Building443() {
	this->m_SittingRoom = "客厅";
	this->m_BedRoom = "卧室";
}

Gay443::Gay443() {
	building = new Building443;
}

void Gay443::visit1() {
	cout << "Gay visit1" << building->m_SittingRoom << endl;
	// void Gay443::visit1是Building443类的友元，可以访问Building443类的私有成员变量
	cout << "Gay visit1" << building->m_BedRoom << endl;
}

void Gay443::visit2() {
	cout << "Gay visit2" << building->m_SittingRoom << endl;
	// void Gay443::visit1不是Building443类的友元，无法访问Buidling443类的私有成员变量
	// cout << "Gay正在访问" << building->m_BedRoom << endl;
}

int main() {
	Gay443 g;
	g.visit1();
	g.visit2();
	system("pause");
	return 0;
}