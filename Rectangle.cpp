#include "Rectangle.h"


Rectangle::Rectangle(Vec2D origin, int height, int width) : m_origin{ origin }, m_height{ height }, m_width{ width }{}

Vec2D Rectangle::getOrigin() const
{
	return m_origin;
}

int Rectangle::getHeight() const
{
	return m_height;
}

int Rectangle::getWidth() const
{
	return m_width;
}

void Rectangle::moveTo(int x, int y)
{
	m_origin.moveTo(x, y);
}

bool Rectangle::isColliding(Rectangle& rect)
{
    if (m_origin.getX() < rect.getOrigin().getX() + rect.getWidth() &&
        m_origin.getX() + m_width > rect.getOrigin().getX() &&
        m_origin.getY() < rect.getOrigin().getY() + rect.getHeight() &&
        m_origin.getY() + m_height > rect.getOrigin().getY()) 
    {
        return true;
    }
    return false;
}
