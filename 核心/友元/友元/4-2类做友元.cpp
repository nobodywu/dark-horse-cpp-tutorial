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
	// ���߱����� Gay442����Building��ĺ����ѣ����Է��ʵ�Building��˽������
	friend class Gay442;

public:
	Building442();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

// �����ⶨ�庯��ʵ��
Building442::Building442() {
	this->m_SittingRoom = "����";
	this->m_BedRoom = "����";
}

Gay442::Gay442() {
	building = new Building442;
}

void Gay442::visit() {
	cout << "Gay���ڷ���" << building->m_SittingRoom << endl;
	cout << "Gay���ڷ���" << building->m_BedRoom << endl;  // ����Building���˽�г�Ա����
}

int main442() {
	Gay442 g;
	g.visit();

	system("pause");
	return 0;
}