#include<iostream>
#include "point.h"
#include "circle.h"
using namespace std;

void isInCircle(Circle& c, Point& p) {
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

int main122() {
	cout << "·ÖÎÄ¼þ" << endl;

	Circle c;
	Point p_c;
	p_c.setX(3);
	p_c.setY(3);
	c.setR(2);
	c.setCenter(p_c);

	Point p;
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