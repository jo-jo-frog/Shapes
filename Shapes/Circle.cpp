#include "Circle.h"
#include "Point.h"

namespace C {
    Circle::Circle(int x, int y, int r)
    {
        m_centre = new P::Point(x, y);
        m_radius = r;
    }

    Circle::~Circle()
    {
        delete(m_centre);
    };
}