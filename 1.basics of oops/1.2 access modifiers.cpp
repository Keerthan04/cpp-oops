//use of access modifiers

/*
Access modifiers are used to specify the accessibility of the properties and methods of the class. There are three types of access modifiers in C++:

1. public: The properties and methods declared as public are accessible from outside the class.

2. private: The properties and methods declared as private are accessible only within the class.

3. protected: The properties and methods declared as protected are accessible within the class and its derived classes(inheritance).

by default all are private if we dont write any access modifiers so if we want to access the properties and methods of the class we need to use the access modifiers.

hence depending on the situation we need to use the access modifiers.
*/

#include<iostream>
#include<string>
using namespace std;

class Teacher{
    public:
        string name;//public property
        string dept;//public property
        void changeDept(string newDept){//public method
            dept = newDept;
        }
    private:
        string subject;//private property
    protected:
        double salary;//protected property

    //sometimes we make a variable private or protected so that access is not given out directly and to get the value or set the value of that variable we use public methods and are generally called "getters and setters".
    public:
        //getter and setter methods
        //getter method is used to get the value of the private or protected property
        double getSalary(){//public method to get the value of salary
            return salary;
        }
        //setter method is used to set the value of the private or protected property
        void setSalary(double newSalary){//public method to set the value of salary
            salary = newSalary;
        }
};

int main(){
    Teacher t1;
    t1.name = "John";
    t1.dept = "CSE";
    t1.changeDept("EEE");
    //t1.subject = "Python";//this will give an error as subject is a private property
    //t1.salary = 50000;//this will give an error as salary is a protected property
    cout<<"name of the teacher is "<<t1.name<<endl; //to just print out

    //use of getter and setter methods
    t1.setSalary(50000);
    cout<<"salary of the teacher is "<<t1.getSalary()<<endl;
    return 0;
}