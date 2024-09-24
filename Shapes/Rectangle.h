#pragma once
#include "Point.h"

namespace R {
    class Rectangle
    {
    public:
        P::Point* m_p1;
        P::Point* m_p2;
        P::Point* m_p3;
        P::Point* m_p4;

        Rectangle(int x, int y, int w, int h);
        ~Rectangle();
    };
}
