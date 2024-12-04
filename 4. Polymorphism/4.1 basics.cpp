/*
Polymorphism
!Important

Polymorphism is the ability of objects to take on different forms or behave in different ways depending upon the context in which they are used.

best example is constructor overloading(same constructor different parameters and what and how we are passing like that that constructor will be called)

In C++, polymorphism is mainly divided into two types:

1. Compile Time Polymorphism(detected during compile time only that which function/method to be called)
(example is constructor overloading)
another example is Function overloading

-Function overloading
is when we have multiple functions with the same name but different parameters(no or dtype is different (no effect of same or different return type))

-Operator overloading
is when we use operators like +, -, =, etc. with user-defined data types.
like string b = "abc" string a = b and int y = 10 int x = y so here we are using = operator with different user defined data types

2. Run Time Polymorphism(detected during runtime only that which function/method to be called i.e  based on which ka object is created and which function is called during runtime it is decided)
(example is function overriding)
it is also called dynamic polymorphism

-Function overriding(dependent on inheritance which is diff from function overloading)
Parent and child both contain the same function with the same name and parameters. In this case, the function in the child class overrides the function in the parent class.(both contain same function with different implementation. the parent class function is said to be overriden i.e child class ka has more priority than parent class function)

- Vritual functions
2nd example of run time polymorphism is virtual functions
Learn in virtual function.cpp

*/


#include <iostream>
using namespace std;

//example of function overloading
class Print{
    public:
    void show(int x){
        cout<<"value of x is: "<<x<<endl;
    }
    void show(int x,int y){
        cout<<"value of x is: "<<x<<endl;
        cout<<"value of y is: "<<y<<endl;
    }
    void show(char x){
        cout<<"value of x is: "<<x<<endl;
    }
};
int main(){
    Print p;
    p.show(10);
    p.show(10,20);
    p.show('a');//so based on context and diff parameters it will call the respective function
}

//example of function overriding
class Parent {
    public:
    void getInfo(){
        cout<<"This is parent class"<<endl;
    }
};

class Child : public Parent{
    public:
    void getInfo(){
        cout<<"This is child class"<<endl;
    }//so here same name as that of parent class function but different implementation so child class function will be called i.e function overriding
};

int main(){
    Child c;
    c.getInfo();//so this will print child class function(overrides the parent class function)
    Parent p;
    p.getInfo();//this will print parent class function
    return 0;
}


