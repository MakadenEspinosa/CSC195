#include <iostream>
#include <vector>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    (*c).SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        if (dynamic_cast<Circle*>(shapes[i]) != nullptr)
            cout << "Radius: " << dynamic_cast<Circle*>(shapes[i])->GetRadius() << endl;
    }
    for (int i = 0; i < shapes.size(); i++)
        delete shapes[i];
    return 0;
}
