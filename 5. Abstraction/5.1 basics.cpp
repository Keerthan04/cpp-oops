/*
Abstraction
------------
- Hiding all unnecessary details and showing only the necessary features of an object.
best way to use this is by using access modifiers and getter and setter methods. so access modifiers are one of the best ways to implement abstraction.

another way to implement abstraction is by using abstract classes and interfaces.

Abstract class:
- A class that is declared as abstract using the keyword abstract is called an abstract class.
- An abstract class can have both abstract and non-abstract methods.
- An abstract class cannot be instantiated.
- An abstract class can have constructors and destructors.
- An abstract class can have member variables.
- An abstract class can have static methods.
- An abstract class can have static variables.
- Abstract classes are used to provide a base class from which the other classes can be derived.
- They cannot be instantiated, and are meant to be inherited.
- Abstract classes are typically used to define an interface for derived classes.

so abstract classes is like a blueprint for other classes.
so when we inherit an abstract class, we have to implement all the abstract methods(non abstract also abstract class can have but no compulsory to implement) in the derived class so those methods are overridden.

cpp does not have a keyword abstract to declare a class as abstract but we can use virtual functions to declare a class as abstract.
so the method we need to implement in the derived class we can declare that method as a pure virtual function in the base class.

pure virtual function:
- A pure virtual function is a function that is declared in the base class but has no definition.
- A pure virtual function is declared using the keyword virtual followed by the function name and a semicolon.
- A pure virtual function must be overridden in the derived class.
*/

//example of abstract class
#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() = 0; // pure virtual function(so we tell value is 0 and should be overridden in the derived class)
};

class Rectangle : public Shape {//so this is how we are inheriting the abstract class
    public:
    void draw() {//the abstract method shd be implemented in the derived class
        cout << "Drawing a rectangle" << endl;
        }
};
class Circle : public Shape {
    public:
    void draw() {
        cout << "Drawing a circle" << endl;
        }
};
int main() {
    //Learn this part(the pointer and virtual functions)
    // Shape *shape = new Rectangle();//so we can create a pointer of the abstract class and assign the derived class
    // shape->draw();
    // shape = new Circle();
    // shape->draw();
    Rectangle r;
    r.draw();
    Circle c;
    c.draw();
    return 0;
}