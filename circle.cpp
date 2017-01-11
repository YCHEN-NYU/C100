#include <iostream>
#include <string>
using namespace std;
#define PI 3.1415926
class Circle{
    private:
        double radius;
        string color;
    public:
        Circle(double r = 1.0, string c = "red"){
          radius = r;
          color = c;
        }

        double GetRadius(){
          return radius;
        }

        string GetColor(){
          return color;
        }

        double GetArea(){
          return 2*PI*radius*radius;
        }
};


int main()
{
    Circle circle1(1.2, "blue");
    cout << "radius = " << circle1.GetRadius() 
         << " color = " << circle1.GetColor() 
         << " area = " << circle1.GetArea() << endl;

    return 0;
}

