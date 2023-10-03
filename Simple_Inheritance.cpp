#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "BMW";
    string color = "White";
};

class Features: public vehicle{ //Simple Inheritance --> Features (Child Class) inherits the characteristics of the class-vehicle (Parent Class)
    public:
    string engine = "BMW N52";
    string milage = "17.42 Kmpl";
};

int main(){
    Features car; //Instantiation of object car
    cout<<car.color;
    cout<<endl<<car.brand<<" "<<car.engine;
}

/*OUTPUT
White
BMW BMW N52*/
