# Inheritance
The capability of a class to derive properties and characteristics from another class is called Inheritance. 
Inheritance is one of the most important features of Object-Oriented Programming. 

Inheritance is a feature or a process in which, new classes are created from the existing classes. 
The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. 
The derived class now is said to be inherited from the base class.

# Modes of Inheritance: There are 3 modes of inheritance.

* Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class
will become protected in the derived class.
* Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
* Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

# Types Of Inheritance:-
1) Single inheritance --> In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.
2) Multiple inheritance --> In Multiple Inheritance a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.
3) Multilevel inheritance --> In this type of inheritance, a derived class is created from another derived class.
4) Hierarchical inheritance --> In this type of inheritance, more than one subclass is inherited from a single base class.
   i.e. more than one derived class is created from a single base class.
5) Hybrid inheritance --> Hybrid Inheritance is implemented by combining more than one type of inheritance.
   For example: Combining Hierarchical inheritance and Multiple Inheritance.

# EXPERIMENT NO: 1

AIM: Simple Inheritance
ALGORITHM:

--> STEP 1: START
--> STEP 2: Create a Base class and define certain variables inside it //It should be PUBLIC
--> STEP 3: Create a derived class by takeing the characteristics of the base class and create some variables of its own too
    class Features: public vehicle{
    public:
    string engine = "BMW N52";
    string milage = "17.42 Kmpl";
};
--> STEP 4: Create an object in main function and call the functions/variables
--> STEP 5: Print the output
--> STEP 6: STOP

OUTPUT
White
BMW BMW N52


# EXPERIMENT NO: 2

AIM: Multiple Inheritance
ALGORITHM:

--> STEP 1: START
--> STEP 2: Create a Base class and define certain variables inside it //It should be PUBLIC
--> STEP 3: Create another Base class and define certain variables inside it //It should be PUBLIC
--> STEP 4: Create a derived class by takeing the characteristics of both the base classes and create some variables of its own too
    class display:public Features, public vehicle{ 
    public:
    void Display(){
        cout<< brand<<" "<<color<<" "<<milage;
    }
};
--> STEP 5: Create an object in main function and call the functions/variables
--> STEP 6: Print the output
--> STEP 7: STOP

OUTPUT
BMW White 17.42 Kmpl


# EXPERIMENT NO: 3

AIM: Multilevel Inheritance
ALGORITHM:

--> STEP 1: START
--> STEP 2: Create a Base class and define certain variables inside it //It should be PUBLIC
--> STEP 3: Create a derived class by takeing the characteristics of the base class_1 and create some variables of its own too
class B : public A {
public:
    int b;
    void get_B_data()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
};
--> STEP 4: Create a new derived class by takeing the characteristics of new derived class 
    class C : public B {
    private:
    int c;
    };
 
--> STEP 5: Create an object in main function and call the functions/variables
--> STEP 6: Print the output
--> STEP 7: STOP

OUTPUT
Enter value of a: 4
Enter value of b: 5
Enter value of c: 9
sum: 18

# EXPERIMENT NO: 4

AIM: Hierarchical inheritance
ALGORITHM:

--> STEP 1: START
--> STEP 2: Create a Base class and define certain variables inside it //It should be PUBLIC
--> STEP 3: Create a derived class by takeing the characteristics of the base class_1 and create some variables of its own too
// derived class 1
class Dog : public Animal {
   public:
    void bark() {
        cout << "I am a Dog. Woof woof." << endl;
    }
};
--> STEP 4: Create a new derived class by takeing the characteristics of same base class 
// derived class 2
class Cat : public Animal {
   public:
    void meow() {
        cout << "I am a Cat. Meow." << endl;
    }
};
 
--> STEP 5: Create an object in main function and call the functions/variables
--> STEP 6: Print the output
--> STEP 7: STOP

OUTPUT
Dog Class:
I am an animal.
I am a Dog. Woof woof.

Cat Class:
I am an animal.
I am a Cat. Meow.
