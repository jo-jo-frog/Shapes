#include "Rectangle.h"
#include "Point.h" 

namespace R {
    Rectangle::Rectangle(int x, int y, int w, int h)
    {
        m_p1 = new P::Point(x, y);
        m_p2 = new P::Point(x, y + h);
        m_p3 = new P::Point(x + w, y + h);
        m_p4 = new P::Point(x + w, y);
    };

    Rectangle::~Rectangle()
    {
        delete(m_p1);
        delete(m_p2);
        delete(m_p3);
        delete(m_p4);
    };
}