#include<iostream>
using namespace std;

// ǳ�������򵥵ĸ�ֵ��������
// ������ڶ�����������ռ䣬���п�������

class Person25{
public:
	// �޲Σ�Ĭ�ϣ����캯��
	Person25() {
		cout << "�޲ι��캯��" << endl;
	}

	// �вι��캯��
	Person25(int age, int height) {
		m_age = age;
		m_height = new int(height); // new�ķ���ֵ��ͬ���͵�ָ�����
		cout << "�вι��캯��" << endl;
	}

	// �������캯��
	Person25(const Person25& p) {
		m_age = p.m_age;
		m_height = new int(*p.m_height); // �������Ϊ��Ϊ*p.m_height��m_height��ָ����������ֵ����һ����ַ������һ���ڴ棩
		cout << "�������캯��" << endl;
	}

	// ��������
	~Person25() {
		cout << "��������" << endl;
		if (m_height != NULL) {
			delete m_height;
		}
	}

public:
	int m_age;
	int* m_height;
};

void test251() {
	Person25 p1(18, 180);
	Person25 p2(p1);
	cout << "p1���䣺" << p1.m_age << "��ߣ�" << *p1.m_height << endl;
	cout << "p2���䣺" << p2.m_age << "��ߣ�" << *p2.m_height << endl; // p2.m_height��ָ���������һ����ַ
}

int main25() {
	test251();
	system("pause");
	return 0;
}