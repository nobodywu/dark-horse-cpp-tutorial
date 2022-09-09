#include<iostream>
using namespace std;

class Cube {
public:
	void setL(int l) {
		m_L = l;
	}

	int getL() {
		return m_L;
	}

	void setW(int w) {
		m_W = w;
	}

	int getW() {
		return m_W;
	}

	void setH(int h) {
		m_H = h;
	}

	int getH() {
		return m_H;
	}

	int calcS() {
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	int calcV() {
		return m_L * m_W * m_H;
	}

	bool isSame(Cube c) {
		if (m_L == c.m_L && m_W == c.m_W && m_H == c.m_H) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isSameByRef(Cube &c) {
		if (m_L == c.m_L && m_W == c.m_W && m_H == c.m_H) {
			return true;
		}
		else {
			return false;
		}
	}

private:
	int m_L;
	int m_W;
	int m_H;
};

int main11() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的表面积：" << c1.calcS() << endl;
	cout << "c1的体积：" << c1.calcV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(20);

	if (c1.isSame(c2)) {
		cout << "c1 == c2" << endl;
	}
	else {
		cout << "c1 =/= c2" << endl;
	}

	if (c1.isSameByRef(c2)) {
		cout << "c1 == c2" << endl;
	}
	else {
		cout << "c1 =/= c2" << endl;
	}

	system("pause");
	return 0;

}