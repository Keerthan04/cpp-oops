/*
Static Keyword

1. Static Variables
- variables declared as static in a function are created and initialised only once for the lifetime of the program
- static variables in a class are created and initialised only once for the lifetime of the program and they are shared by all the objects of the class
- static member functions can be called without creating an object of the class only using the class name

2. Static Objects
- static objects are created and initialised only once for the lifetime of the program(that is when the program starts and terminates then that obj ka destructor is called otherwise for normall objects it is called based on the scope (see example below))

Friend function and friend class also learn about them
*/

//example of static variables
#include <iostream>
using namespace std;

void fun(){
    static int x = 10;//so init only once so only first call will init x = 10 then for next calls x will be 11, 12, 13, ...
    cout<<x<<endl;
    x++;// incrementing the static variable
};

class A {
    public:
    static int x;
    void increment(){
        x++;
    }
};
// calling the function multiple times will print the same value of x
int main(){
    fun();
    fun();
    fun();

    A obj1, obj2;
    cout<<A::x<<endl;//accessing static member using class name

    obj1.x = 10;
    cout<<obj1.x<<endl;
    obj2.x = 20;
    cout<<obj2.x<<endl;
    cout<<obj1.x<<endl;//both obj1 and obj2 share the same static variable x so here the value of x for obj1 will be 20 as obj2.x = 20 was done before this line
    obj1.increment();
    obj2.increment();//the increment done will be to x and x is shared by both obj1 and obj2 so the value of x will be 22 for both
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;//for both it is 22
    return 0;
}

//example of static objects
class ABC{
    public:
    ABC(){
        cout<<"Constructor called"<<endl;
    }
    ~ABC(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    if(true){
        //ABC obj;//if this then constructor and destructor will be called as scope is till if so before printing hello destructor called will be printed
        static ABC obj;//if this then constructor will be called only once and destructor will be called only once at the end of the program that is after the hello is printed and then end of main then end of program so then destructor will be called.
    }
    cout<<"Hello"<<endl;
    return 0;
}