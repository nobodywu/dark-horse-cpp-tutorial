#include<iostream>
using namespace std;

// �β�int* pҲ����Ϊint p[]
void bubbleSort(int* p, int len) {
	int temp = 0;
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (p[i] > p[j]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;

			}
		}
	}
}

int main() {
	int arr[] = { 5,2,7,1,9,3,6 };
	int len = sizeof(arr) / sizeof(arr[0]);

	// ����ַarr��ֱ����arr�ڽ�������
	bubbleSort(arr, len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}