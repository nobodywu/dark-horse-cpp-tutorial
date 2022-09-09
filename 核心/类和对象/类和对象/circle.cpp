#include "circle.h"

void Circle::setCenter(Point c) {
	m_Center = c;
}

Point Circle::getCenter() {
	return m_Center;
}

void Circle::setR(int r) {
	m_R = r;
}

int Circle::getR() {
	return m_R;
}