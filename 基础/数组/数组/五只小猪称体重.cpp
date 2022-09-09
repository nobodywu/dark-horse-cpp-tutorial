#include <iostream>
using namespace std;

int main2() {
	int arr[5] = { 300, 350, 200, 400, 250 };
	int max_num = -1;

	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++) {
		if (max_num < arr[i]) {
			max_num = arr[i];
		}
	}

	cout << max_num << endl;

	system("pause");

	return 0;
}