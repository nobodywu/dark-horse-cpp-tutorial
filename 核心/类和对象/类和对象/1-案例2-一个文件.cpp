#include<iostream>
using namespace std;

class Point1 {
private:
	int m_X;
	int m_Y;

public:
	void setX(int x) {
		m_X = x;
	}

	int getX() {
		return m_X;
	}

	void setY(int y) {
		m_Y = y;
	}

	int getY() {
		return m_Y;
	}
};

class Circle1 {
private:
	Point1 m_Center;
	int m_R;

public:
	void setCenter(Point1 c) {
		m_Center = c;
	}

	Point1 getCenter() {
		return m_Center;
	}

	void setR(int r) {
		m_R = r;
	}

	int getR() {
		return m_R;
	}
};

void isInCircle(Circle1 &c, Point1 &p) {
	if (pow(c.getR(), 2) > pow((p.getX() - c.getCenter().getX()), 2) + pow((p.getY() - c.getCenter().getY()), 2)) {
		cout << "In Circle" << endl;
	}
	else if ((pow(c.getR(), 2) == pow((p.getX() - c.getCenter().getX()), 2) + pow((p.getY() - c.getCenter().getY()), 2))) {
		cout << "On Circle" << endl;
	}
	else {
		cout << "Out of Circle" << endl;
	}
}

int main121() {
	cout << "一个文件" << endl;

	Circle1 c;
	Point1 p_c;
	p_c.setX(3);
	p_c.setY(3);
	c.setR(2);
	c.setCenter(p_c);

	Point1 p;
	p.setX(1);
	p.setY(3);
	isInCircle(c, p);

	p.setX(2);
	p.setY(3);
	isInCircle(c, p);

	p.setX(-1);
	p.setY(3);
	isInCircle(c, p);

	system("pause");
	return 0;
}