#include<iostream>
using namespace std;

// ������
// �����У������п�����Public�������ң�Private��
// �����������Ŀ��˶����Խ�ȥ������������˽�еģ�ֻ���Լ��ܽ�ȥ
// ���ǣ����ҿ�������û��ѽ�ȥ

// �ڳ������Щ˽�����ԣ�Ҳ������������ĺ���������з��ʣ�����Ҫ�õ���Ԫ
// ��Ԫ��Ŀ�ľ�����һ���������࣬������̨һ�����е�˽�г�Ա
// ��Ԫ�Ĺؼ���Ϊ friend
// ��Ԫ������ʵ�֣�
// 1. ȫ�ֺ�������Ԫ
// 2. ������Ԫ
// 3. ��Ա��������Ԫ

// ȫ�ֺ�������Ԫ

class Building441 {
	// ���߱����� ȫ�ֺ���goodGay441 �� Building��ĺ����ѣ����Է������е�˽������
	friend void goodGay441(Building441* building);

public:

	Building441() {
		m_SittingRoom = "����";
		m_BedRoom = "����";

	}

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

void goodGay441(Building441* building) {
	cout << "�û������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ�" << building->m_BedRoom << endl;

}


int main441() {
	Building441 b;
	goodGay441(&b);

	system("pause");
	return 0;
}