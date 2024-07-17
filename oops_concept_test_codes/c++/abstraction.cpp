#include <iostream>
using namespace std;

class Shape{
    public:
        //pure virtual function
       virtual void draw() = 0;
       virtual double area() = 0;

       // normal function declaration
       void commonfunction(){
        cout<<"commonFunction"<<endl;
       }
};

class Circle : public Shape{
    private:
        double radius;

    public:

        Circle(double r) : radius(r) {}

        void draw() override{
            cout<<"drawing function"<<endl;
        }

        double area() override{
            cout<< "override function"<<endl;
            return (3.14*radius * radius);
        }


};

class Rectangle : public Shape{
    private:
        double width,height;

    public:
        Rectangle(double w, double h): width(w), height(h) {}

        void draw() override{
            cout<<"draw function"<<endl;
        }

        double area() override{
            cout<< "area function"<<endl;
            return width*height;
        }

};


int main(){

    // Shape shape; // gives error
    Circle circle(5.0);
    Rectangle rectangle(2.0, 3.0);

    auto area_circle = circle.area();
    cout<<"circle area "<<area_circle<<endl;

    auto area_rectangle = rectangle.area();
    cout<<"area rectangle "<<area_rectangle<<endl;

    return 0;
}