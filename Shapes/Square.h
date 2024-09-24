#pragma once
#include "Point.h"

namespace S {
    class Square
    {
    public:
        P::Point* m_p1;
        P::Point* m_p2;
        P::Point* m_p3;
        P::Point* m_p4;

        Square(int x, int y, int a);

        ~Square();
    };
}

