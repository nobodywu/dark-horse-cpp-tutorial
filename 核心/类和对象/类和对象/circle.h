#pragma once
#include<iostream>
#include "point.h"
using namespace std;

class Circle {
private:
	Point m_Center;
	int m_R;

public:
	void setCenter(Point c);

	Point getCenter();

	void setR(int r);

	int getR();
};