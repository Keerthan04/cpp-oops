/*
Inheritance
When properties and member functions of base class(parent class) are passed on to the derived class(child class), it is called inheritance.

The derived class is a class that inherits properties and member functions from another class called base class. The derived class can add new properties and member functions to the existing ones in the base class.

- Inheritance is a mechanism in which one class acquires the properties and behavior of another class.
- It is a way to reuse the code and reduce the code duplication.
*/

#include<iostream>
using namespace std;

class Person{
    public:
    int age;
    string name;

    Person(int age, string name){
        this->age = age;
        this->name = name;
    }
};

//in cpp this is how u inherit a class where we also need to mention the access specifier and then the base class name and use :
//this is a public inheritance(where the derived class can access the properties and member functions of the base class) others see in mode of inheritance.cpp file
class Student : public Person{
    public:
    int rollNo;
    //!important the constructor of the derived class
    Student(string name,int age,int rollNo) : Person(age,name){
        //in the above line we are calling the constructor of the base class and passing the values to it as the base class constructor is parameterized so we need to pass the values to it as well as the name of the base class constructor is same as the name of the class so we need to use the class name to call the constructor of the base class and pass the values to it(and values so what we got of the derived class constructor that is put to the base class constructor)
        this -> rollNo = rollNo;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        //so we are still able to access the properties of the base class as we have inherited it
    }
};

int main(){
    Student s1("Rahul",20,101);
    //!Important point: When an object of the derived class is created, the constructor of the base class is called first and then only the derived class constructor is called
    //!Important point : whenever deallocation is happening, the destructor of the derived class is called first and then the destructor of the base class is called(ulta of object creation)
    s1.name = "John";
    s1.age = 20;
    s1.rollNo = 101;
    s1.getInfo();
    return 0;
}
//if default constructor is not present in the base class then we need to call the parameterized constructor of the base class in the derived class constructor(like super in java) if default is there then direct call will happen