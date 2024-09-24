#include <iostream>
#include <locale.h>
#include <vector>
#include "Point.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

using namespace std;
using namespace P;
using namespace C;
using namespace S;
using namespace R;

class Shapes
{
public:
    Square* create_s(int x, int y)
    {
        int a;
        cout << "Введите сторону квадрата\n";
        cin >> a;
        while (a <= 0)
        {
            cout << "Введите сторону квадрата\n";
            cin >> a;
        }
        Square* figure = new Square(x, y, a);
        cout << "(" << figure->m_p1->m_x << ";" << figure->m_p1->m_y << ")\n";
        cout << "(" << figure->m_p2->m_x << ";" << figure->m_p2->m_y << ")\n";
        cout << "(" << figure->m_p3->m_x << ";" << figure->m_p3->m_y << ")\n";
        cout << "(" << figure->m_p4->m_x << ";" << figure->m_p4->m_y << ")\n";
        return figure;
    }

    Circle* create_c(int x, int y)
    {
        int r;
        cout << "Введите радиус\n";
        cin >> r;
        while (r <= 0)
        {
            cout << "Введите радиус\n";
            cin >> r;
        }
        Circle* figure = new Circle(x, y, r);
        cout << "(" << figure->m_centre->m_x << ";" << figure->m_centre->m_y << ")\n";
        return figure;
    }

    Rectangle* create_r(int x, int y)
    {
        int w, h;
        cout << "Введите ширину и высоту\n";
        cin >> w >> h;
        while (w <= 0 || h <= 0)
        {
            cout << "Введите ширину и высоту\n";
            cin >> w >> h;
        }
        Rectangle* figure = new Rectangle(x, y, w, h);
        cout << "(" << figure->m_p1->m_x << ";" << figure->m_p1->m_y << ")\n";
        cout << "(" << figure->m_p2->m_x << ";" << figure->m_p2->m_y << ")\n";
        cout << "(" << figure->m_p3->m_x << ";" << figure->m_p3->m_y << ")\n";
        cout << "(" << figure->m_p4->m_x << ";" << figure->m_p4->m_y << ")\n";
        return figure;
    }

    // Создать массив point и бежать по нему

    void shift_s(Square* name, int d_x, int d_y)
    {
        name->m_p1->m_x += d_x;
        name->m_p1->m_y += d_y;
        name->m_p2->m_x += d_x;
        name->m_p2->m_y += d_y;
        name->m_p3->m_x += d_x;
        name->m_p3->m_y += d_y;
        name->m_p4->m_x += d_x;
        name->m_p4->m_y += d_y;
        cout << "(" << name->m_p1->m_x << ";" << name->m_p1->m_y << ")\n";
        cout << "(" << name->m_p2->m_x << ";" << name->m_p2->m_y << ")\n";
        cout << "(" << name->m_p3->m_x << ";" << name->m_p3->m_y << ")\n";
        cout << "(" << name->m_p4->m_x << ";" << name->m_p4->m_y << ")\n";
    }

    void shift_c(Circle* name, int d_x, int d_y)
    { 
        name->m_centre->m_x += d_x;
        name->m_centre->m_y += d_y;
        cout << "(" << name->m_centre->m_x << ";" << name->m_centre->m_y << ")\n";
    }

    void shift_r(Rectangle* name, int d_x, int d_y)
    {
        name->m_p1->m_x += d_x;
        name->m_p1->m_y += d_y;
        name->m_p2->m_x += d_x;
        name->m_p2->m_y += d_y;
        name->m_p3->m_x += d_x;
        name->m_p3->m_y += d_y;
        name->m_p4->m_x += d_x;
        name->m_p4->m_y += d_y;
        cout << "(" << name->m_p1->m_x << ";" << name->m_p1->m_y << ")\n";
        cout << "(" << name->m_p2->m_x << ";" << name->m_p2->m_y << ")\n";
        cout << "(" << name->m_p3->m_x << ";" << name->m_p3->m_y << ")\n";
        cout << "(" << name->m_p4->m_x << ";" << name->m_p4->m_y << ")\n";
    }
  
    void scale_s(Square* name, int k)
    {
        name->m_p2->m_x *= k;
        name->m_p2->m_y *= k;
        name->m_p3->m_x *= k;
        name->m_p3->m_y *= k;
        name->m_p4->m_x *= k;
        name->m_p4->m_y *= k;
        cout << "(%d" << name->m_p1->m_x << ";%d)\n" << name->m_p1->m_y;
        cout << "(%d" << name->m_p2->m_x << ";%d)\n" << name->m_p2->m_y;
        cout << "(%d" << name->m_p3->m_x << ";%d)\n" << name->m_p3->m_y;
        cout << "(%d" << name->m_p4->m_x << ";%d)\n" << name->m_p4->m_y;
    }

    void scale_c(Circle* name, int k)
    {
        name->m_radius *= k;
        cout << "r = %d\n" << name->m_radius;
    }

    void scale_r(Rectangle* name, int k)
    {
        name->m_p2->m_x *= k;
        name->m_p2->m_y *= k;
        name->m_p3->m_x *= k;
        name->m_p3->m_y *= k;
        name->m_p4->m_x *= k;
        name->m_p4->m_y *= k;
        cout << "(%d" << name->m_p1->m_x << ";%d)\n" << name->m_p1->m_y;
        cout << "(%d" << name->m_p2->m_x << ";%d)\n" << name->m_p2->m_y;
        cout << "(%d" << name->m_p3->m_x << ";%d)\n" << name->m_p3->m_y;
        cout << "(%d" << name->m_p4->m_x << ";%d)\n" << name->m_p4->m_y;
    }
};

int func_select_shape()
{
    cout << "1 - Круг\n2 - Квадрат\n3 - Прямогольник\n";
    int choice;
    cin >> choice;
    while (choice != 1 && choice != 2 && choice != 3)
    {
        cout << "Введите выбор:\n";
        cin >> choice;
    }
    switch (choice)
    {
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
    }
    return 0;
}

int main()
{
    Shapes start;
    setlocale(LC_ALL, "russian");
    int choice;
    Square* fig_S = nullptr;
    Circle* fig_C = nullptr;
    Rectangle* fig_R = nullptr;
    //vector<Shapes*> array(5);
    while (1)
    {
        cout << "1 - создание фигуры\n2 - выбор фигуры\n3 - изменение масштаба\n4 - сдвиг\n5 - delete figure\n6 - exit\n";
        cout << "Введите выбор\n";
        cin >> choice;
        while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5)
        {
            cout << "1 - создание фигуры\n2 - выбор фигуры\n3 - изменение масштаба\n4 - сдвиг\n5 - delete figure\n6 = exit\n";
            cout << "Введите выбор\n";
            cin >> choice;
        }
        switch (choice)
        {
            case 1:
            {
                int x, y;
                cout << "input the coordinats of center\n";
                cin >> x >> y;
                switch (func_select_shape())
                {
                    case 1: if (!fig_C) fig_C = start.create_c(x, y); else cout << "Already exist\n"; break;
                    case 2: if(!fig_S) fig_S = start.create_s(x, y); else cout << "Already exist\n"; break;
                    case 3: if (!fig_R) fig_R = start.create_r(x, y); else cout << "Already exist\n";
                }
                break;
            }
            case 2: cout << "soon\n"; break;

            case 3: 
            {
                int k;
                cout << "input k\n";
                cin >> k;
                switch (func_select_shape())
                {
                    case 1: if(fig_C) start.scale_c(fig_C, k); else cout << "Isn't exist\n"; break;
                    case 2: if(fig_S) start.scale_s(fig_S, k); else cout << "Isn't exist\n"; break;
                    case 3: if(fig_R) start.scale_r(fig_R, k); else cout << "Isn't exist\n";
                }
                break;
            }

            case 4: 
            {
                int d_x, d_y;
                cout << "Введите сдвиг по х и сдвиг по у\n";
                cin >> d_x >> d_y;
                switch (func_select_shape())
                {
                    case 1: if(fig_C) start.shift_c(fig_C, d_x, d_y); else cout << "Isn't exist\n"; break;
                    case 2: if(fig_S) start.shift_s(fig_S, d_x, d_y); else cout << "Isn't exist\n"; break;
                    case 3: if(fig_R) start.shift_r(fig_R, d_x, d_y); else cout << "Isn't exist\n";
                }
                break;
            }

            case 5: 
            {   
                switch (func_select_shape())
                {
                    case 1: if (fig_C) delete(fig_C); else cout << "Isn't exist\n"; break;
                    case 2: if (fig_S) delete(fig_S); else cout << "Isn't exist\n"; break;
                    case 3: if (fig_R) delete(fig_R); else cout << "Isn't exist\n";
                }
                break;
            }

            case 6: exit(0);
        }
    }
}

/*
создать классы: круга, квадрата, и прямоугольника
метод: создание, перемещение, масштабирование
меню

созданная фигура записывается в список, затем мы можем взять любую, 
вывести ее характеристики и взаимодействовать с ней, 
нажав сохранить мы записываем текущее состояние, нужно выводить ее точки
*/