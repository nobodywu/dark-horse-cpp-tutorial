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
	// ���߱����� Gay443�� �е�visit��Ա������ Building443 �ĺ����ѣ����Է���˽������
	friend void Gay443::visit1();

public:
	Building443();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

Building443::Building443() {
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

Gay443::Gay443() {
	building = new Building443;
}

void Gay443::visit1() {
	cout << "Gay visit1" << building->m_SittingRoom << endl;
	// void Gay443::visit1��Building443�����Ԫ�����Է���Building443���˽�г�Ա����
	cout << "Gay visit1" << building->m_BedRoom << endl;
}

void Gay443::visit2() {
	cout << "Gay visit2" << building->m_SittingRoom << endl;
	// void Gay443::visit1����Building443�����Ԫ���޷�����Buidling443���˽�г�Ա����
	// cout << "Gay���ڷ���" << building->m_BedRoom << endl;
}

int main() {
	Gay443 g;
	g.visit1();
	g.visit2();
	system("pause");
	return 0;
}