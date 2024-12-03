/*
this is a special pointer in cpp that points to the current object of the class.
this -> prop is same as obj.prop same as *(this).prop

so when obj is created it will have a memory allocated and this pointer will be automatically created and will point to the object(meaning will store the address of the obj memory(memory location address stored in this variable)). so then we can use this pointer to access the properties of the object and set the values of the properties of the object to the values of the parameters of the constructor.

* is called dereferencing operator and it is used to access the value at the address stored in the pointer.
& is called the address of operator and it is used to get the address of the variable.
*/

#include <iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    Teacher(){
        cout << "Constructor called" << endl;
    }
    Teacher(string name,string dept,string subject,double salary)
    {
        //so same name as parameters and we use this pointer and tell the compiler to assign the values to the properties of the object.
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
};

int main(){
    Teacher t1("Keerthan","CSE","Python",50000);//so this is calling the parameterized constructor and setting the values of name,dept,subject and salary to the values of the parameters.
    cout << t1.name << endl;//so this is accessing the name property of the object and printing it out.
}