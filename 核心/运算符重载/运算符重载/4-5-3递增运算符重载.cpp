#include<iostream>
using namespace std;

// ������������أ����ã�����ʵ���Լ�����������

class MyInteger {
	friend ostream& operator<<(ostream& out, MyInteger myint);

public:
	MyInteger() {
		m_Num = 0;
	}

	// ǰ��++
	MyInteger& operator++() {
		// ��++
		m_Num++;
		return *this;
	}

	// ����++
	MyInteger operator++(int) {
		// ��¼��ǰ�����ֵ���ú��ñ����ֵ��1
		// ���Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& out, MyInteger myint) {
	out << myint.m_Num;
	return out;
}

// ǰ��++����++���ٷ���
void test01() {
	MyInteger myInt;
	cout << ++myInt << endl;
}

int main() {
	system("pause");
	return 0;
}