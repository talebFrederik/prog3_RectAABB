#pragma once

class Vec2D
{
public:
	Vec2D();
	Vec2D(int, int);
	int getX() const;
	int getY() const;
	void moveTo(int, int);
private:
	int m_x;
	int m_y;
};

