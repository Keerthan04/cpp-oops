/*
Constructor
- A constructor is a special member function that is called when an object is created.
- It is used to initialize the object's state.

It is special method invoked automatically at time of object creation. Used for Initialization.
so class wont have any space but object will have space in memory.
cpp will create a default constructor if we dont create one.

properties of constructor:
will have same name as class name.
wont have any return type.
only called once when object is created(automatically).
space is allocated for object in memory only when constructor is called.

main used for initialization of some variables and all as default only.
always constructor is made public.


there are 3 types of constructors:
1. Copy constructor
where the object of the class is passed as parameter and then the values of the object are copied to the object of the class.

2. Parameterized constructor
this takes parameters.
3. Non-parameterized constructor
is not taking any parameters.this is also called default constructor.this is constructor with no parameters.

one class can have multiple constructors but the parameters of each constructor must be different(diff dtype,diff number like that).

this particular thing where we can have multiple constructors with different parameters is called constructor overloading(is part of Polymorphism).
*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;
    public:
    Rectangle() // default constructor so no return type and same name as class. and also no parameters for this and also is setting the value of length and breadth to 1.
    {
        length = 1;
        breadth = 1;
    }
    //parametrized constructor
    Rectangle(int l, int b)//so is taking parameters and then setting the values of length and breadth to the values of l and b. also can be done directly dont need any other method but this is also fine and does data hiding.
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }

    //copy constructor so this is taking the object of the class as parameter and then setting the values of length and breadth to the values of the object.
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;//so just doing this is enough as default constructor is called automatically.

    Rectangle r2(10, 5);//so this is calling the parameterized constructor and setting the values of length and breadth to 10 and 5.

    Rectangle r3(r2);//so this is calling the copy constructor and setting the values of length and breadth to the values of r2.
    cout << "Area of r1 is " << r1.area() << endl;
    cout << "Perimeter of r1 is " << r1.perimeter() << endl;

    cout << "Area of r2 is " << r2.area() << endl;
    cout << "Perimeter of r2 is " << r2.perimeter() << endl;

    cout << "Area of r3 is " << r3.area() << endl;
    cout << "Perimeter of r3 is " << r3.perimeter() << endl;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    return 0;
}