#pragma once
#include "Point.h"

namespace C {
    class Circle
    {
    public:
        P::Point* m_centre;
        int m_radius;

        Circle(int x, int y, int r);
        ~Circle();
    };
}
