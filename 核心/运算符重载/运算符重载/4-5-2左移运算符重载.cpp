#include<iostream>
using namespace std;

// ������������أ����ã���������Զ�����������

class Person452 {
	friend ostream& operator<<(ostream& out, Person452& p);
public:
	Person452(int a, int b) {
		this->m_A = a;
		this->m_B = b;
	}

	// ��Ա���� ʵ�ֲ��� p << cout ����������Ҫ��Ч��
	// void operator<<(Person452& p){}

private:
	int m_A;
	int m_B;
};

// ȫ�ֺ���ʵ����������
// ostream����ֻ����һ��
ostream& operator<<(ostream& out, Person452& p) {
	out << "a: " << p.m_A << "b: " << p.m_B;
	return out;
}

void test452() {
	Person452 p1(10, 20);
	cout << p1 << "hello world" << endl; // ��ʽ���
}

int main() {

	test452();

	system("pause");
	return 0;

}

// �ܽ᣺������������������Ԫ����ʵ������Զ�����������