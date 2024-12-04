/*
Types of Inheritance:
1. Single Inheritance
where we will have only one base class and one derived class.

2. Multiple Inheritance
where we will have more than one base class and one derived class.
i.e one child class taking more than one parent class

3. Multilevel Inheritance
where we will have a chain of classes(i.e person -> student -> teacher).meaning teacher is derived from student and student is derived from person.

4. Hierarchical Inheritance
where we will have one parent class and will have more than one child class.

5. Hybrid Inheritance
where we will have a combination of any two(or more) types of inheritance.
e.g. one child class taking more than one parent class and also having a chain of classes.

*/
#include<iostream>
using namespace std;

//example of single inheritance
class A
{
    public:
    void display()
    {
        cout<<"This is class A"<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"This is class B"<<endl;
    }
};

//example of multilevel inheritance
class Person{
    public:
    int age;
    string name;
};
class Student : public Person{
    public:
    int roll_no;
};
class Teacher : public Student{
    public:
    string subject;
};

//example of multiple inheritance
class Person{
    public:
    int age;
    string name;
};
class Student{
    public:
    int roll_no;
};
// so here one child taking two parent classes
class Teacher : public Person, public Student{
    public:
    string subject;
};


//example of hierarchical inheritance
class Person{
    public:
    int age;
    string name;
};
class Student : public Person{
    public:
    int roll_no;
};
class Teacher : public Person{
    public:
    string subject;
};
//so both student and teacher are derived from person class