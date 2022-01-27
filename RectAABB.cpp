#include <iostream>
#include "Rectangle.h"
#include "Vec2D.h"

int main()
{
    Vec2D origin{ 1,1 };
    Rectangle rect{ origin, 3, 2 };

    origin.moveTo(2, 4);
    Rectangle rect2{ origin, 3, 2 };

    if (rect.isColliding(rect2))
    {
        std::cout << "Collision";
    }
    else
    {
        std::cout << "Clear";
    }
}

