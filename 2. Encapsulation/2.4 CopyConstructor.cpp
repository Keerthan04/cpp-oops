/*
Copy Constructor
A copy constructor is a member function that initializes an object using another object of the same class.

if not written also cpp will create a default copy constructor.
so just direct if we do Rectangle r2(r1); then it will copy the values of r1 to r2. and then using r2 we can do the same operations as r1. and r2 ka all properties(variables) will be same as r1 ka.
*/

#include <iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(Rectangle &r)//pass by reference
    {//custom copy constructor
        cout<<"This is a custom copy constructor"<<endl;
        this->length = r.length;
        this->breadth = r.breadth;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r1(10, 5);
    cout << "Area of r1 is " << r1.area() << endl;
    Rectangle r2(r1);//if no copy constructor defined in class also then also this will work as this will invoke the default copy constructor.
    cout << "Area of r2 is " << r2.area() << endl;
    return 0;
}