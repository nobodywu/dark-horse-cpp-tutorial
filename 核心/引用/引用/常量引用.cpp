#include<iostream>
using namespace std;

// �����const int* const v��ָ��ָ��ĵء�ֵ�������޸�
void showValue(const int& v) {
	// v += 10; // ֵ�����޸�
	cout << v << endl;
}

// ����������Ҫ���ڷ�ֹ�βα��޸ģ���ֹ�����
int main() {

	// ������Ҫһ���Ϸ����ڴ�ռ䣨10���ǺϷ��ĵ�ַ�������д���
	// int& a = 10;

	// ����const���������Ż����룬
	// int temp = 10;
	// const int& b = temp;
	const int& b = 10;

	int c = 30;
	showValue(c);

	system("pause");
	return 0;

}