#include<iostream>
using namespace std;

// ͨ��3-1֪����Ա�����ͳ�Ա�����Ƿֿ��洢��
// ÿһ���Ǿ�̬��Ա����ֻ�����һ������ʵ����Ҳ���Ƕ��ͬ���͵Ķ���Ṳ��һ�����
// ���⣺���������һ��������ĸ�������ã�
// C++ͨ��thisָ����������⣬thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
// thisָ����������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
// thisָ�벻��Ҫ���壬����ֱ��ʹ��

// ��;��
// 1. ���βκͳ�Ա��������ʱ������ʹ��this������
// 2. ����ķǾ�̬��Ա�����з��ض�����ʹ��return *this

class Person432 {
public:
	int age;

	// �вι��캯��
	Person432(int age) {
		this->age = age;
	}

	Person432& PersonAddPerson(Person432 p) {
		this->age += p.age;
		return *this;
	}
};

int main432() {
	Person432 p1(10);
	cout << p1.age << endl;

	Person432 p2(10);
	p2.PersonAddPerson(p1).PersonAddPerson(p1);
	cout << p2.age << endl;

	system("pause");
	return 0;
}