#include<iostream>
using namespace std;

// C++���еĳ�Ա��������һ����Ķ��󣬸ó�ԱΪ�����Ա

class Phone27 {
public:
	Phone27(string name) {
		m_PhoneName = name;
		cout << "Phone���вι��캯��" << endl;
	}

	~Phone27() {
		cout << "Phone����������" << endl;
	}

public:
	string m_PhoneName;
};


class Person27 {
public:
	// Phone27û���޲Σ�Ĭ�ϣ����캯������˶���Person27���޲Σ�Ĭ�ϣ�����ʱ�ᱨ��
	//Person27() {
	//	cout << "�޲ι���" << endl;
	//}

	// ��ʼ���б���Ը��߱���������
	Person27(string name, string pName):m_name(name),m_phone(pName) {
		cout << "Person���вι���" << endl;
	}

	~Person27() {
		cout << "Person����������" << endl;
	}

	void playGame() {
		cout << m_name << "ʹ��" << m_phone.m_PhoneName << "���ֻ�" << endl;
	}

public:
	string m_name;
	Phone27 m_phone;

};

void test271() {
	// �����г�Ա�����������ʱ�����ǳƸó�ԱΪ�����Ա
	// �����˳���ǣ��ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	// ������˳���빹���෴
	Person27 person("����", "С��");
	person.playGame();
}

int main27() {
	test271();
	system("pause");
	return 0;

}