#include<iostream>
using namespace std;

// ��ָ����Ե��ó�Ա��������Ҫע���Ա�������Ƿ��õ�thisָ��
// ����õ�thisָ�룬����Ҫ�ڳ�Ա���������жϣ��Ա�֤��׳��

class Person433 {
public:
	int m_Age;

	void func1() {
		cout << "func����" << endl;
	}

	void func2(int age) {
		if (this == NULL) {
			cout << "NULLָ�뱣��" << endl;
			return;
		}
		this->m_Age = age;
	}
};


int main433() {
	Person433* p = NULL;
	p->func1();
	p->func2(20);

	Person433 p1;
	p1.func2(20);
	cout << p1.m_Age << endl;

	system("pause");
	return 0;
}