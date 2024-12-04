/*
Virtual Functions
! Important
2nd example of run time polymorphism is virtual functions
virtual function is a member function that you expect to be redefined in a derived class.
When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.

so when we write virtual function_name we expect this to be redefined in the child class

properties of virtual function:
1. virtual function is a member function that you expect to be redefined in a derived class.
2. Virtual function are Dynamic in nature.
3. Defined by the keyword "virtual" inside the base class and are always declared with a base class and overriden in a derived class.
4. A virtual function is called during runtime.

Extra pointer concepts with this and all learn extra concepts of virtual functions.
*/
#include<iostream>
using namespace std;

//example of virtual function
class Parent {
    public:
    virtual void hello(){
        cout<<"This is parent class"<<endl;
    }
};

class Child : public Parent{
    public:
    void hello(){
        cout<<"This is child class"<<endl;
    }//so here same name as that of parent class function but different implementation so child class function will be called i.e function overriding
};

int main(){
    Child c;
    c.hello();//so this will print child class function(overrides the parent class function)
    Parent p;
    p.hello();//this will print parent class function
    return 0;
}