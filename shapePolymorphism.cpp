//A code that demonstrates polymorphism
#include <iostream>
using namespace std;
#include <string>


class Shape {
    public:
        virtual void area() {
        cout<<"Area calculation not defined for generic shape.\n";
        }
};

class Rectangle : public Shape {
    public:
    int length, width;

        Rectangle(int l, int w) {  
            length = l;
            width = w;
        }

        void area() override {
                cout << "Area of Rectangle: " << length * width << endl;
        }
};

class Circle : public Shape {
    public:
        float radius;

        Circle(float r) {
            radius = r;
        }

        void area() override {
            cout << "Area of Circle: " << 3.142f * radius * radius << endl;
        }
};

int main() {
    Shape s;
    s.area();

    Circle c(5.0);
    c.area();

    Rectangle r(4, 6);
    r.area();


    return 0;
}
