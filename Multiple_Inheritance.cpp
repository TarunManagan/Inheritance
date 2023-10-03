#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "BMW";
    string color = "White";
};

class Features{
    public:
    string engine = "BMW N52";
    string milage = "17.42 Kmpl";
};

class display:public Features, public vehicle{ 
//Multiple Inheritance --> Display (Child Class) inherits the characteristics of the class-vehicle and class-Features (Parent Classes)
    public:
    void Display(){
        cout<< brand<<" "<<color<<" "<<milage;
    }
};

int main(){
    display car;
    car.Display();
}

/*OUTPUT
BMW White 17.42 Kmpl*/
