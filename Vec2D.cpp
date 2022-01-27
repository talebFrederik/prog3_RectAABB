#include "Vec2D.h"

Vec2D::Vec2D() : m_x{ 0 }, m_y{ 0 }{}

Vec2D::Vec2D(int x, int y) : m_x{ x }, m_y{ y }{}

int Vec2D::getX() const
{
	return m_x;
}

int Vec2D::getY() const
{
	return m_y;
}

void Vec2D::moveTo(int x, int y)
{
	m_x = x;
	m_y = y;
}
