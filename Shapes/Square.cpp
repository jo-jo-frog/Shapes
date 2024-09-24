#include "Square.h"
#include "Point.h"

namespace S {
    Square::Square(int x, int y, int a)
    {
        m_p1 = new P::Point(x, y);
        m_p2 = new P::Point(x, y + a);
        m_p3 = new P::Point(x + a, y + a);
        m_p4 = new P::Point(x + a, y);
    };

    Square::~Square()
    {
        delete(m_p1);
        delete(m_p2);
        delete(m_p3);
        delete(m_p4);
    };
}