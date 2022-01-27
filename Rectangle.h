#pragma once

#include "Vec2D.h"

class Rectangle
{
public:
	Rectangle(Vec2D, int, int);
	Vec2D getOrigin() const;
	int getHeight() const;
	int getWidth() const;
	void moveTo(int, int);
	bool isColliding(Rectangle&);
private:
	Vec2D m_origin;
	int m_height;
	int m_width;
};

