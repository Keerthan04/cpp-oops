//basic syntax of classess and objects
#include<iostream>
#include<String>
using namespace std;

class Teacher{//declaring a class
    //properties or attributes -> variables inside the class
    string name;
    string dept;
    string subject;
    double salary;

    //methods or member functions -> functions inside the class
    //member functions because they are members of the class(become member of the class)
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    //creating objects of the class
    Teacher t1,t2;//creating two objects of the class
    //to assign the values to the properties of the object or accessing values of the properties of the object we use the . (dot) operator same for the methods of the class

    t1.name = "Keerthan";
    t1.dept = "CSE";
    t1.subject = "Python";

    cout<<t1.name<<endl;
    //this if we write we cant normally do as we need to specify the access specifier of the methods and properties of the class, they are implicitly private by default meaning they are only accessible inside the class and not outside so this wont work
    return 0;
}

//compile is using g++ filename.cpp && ./a.exe(executable file)