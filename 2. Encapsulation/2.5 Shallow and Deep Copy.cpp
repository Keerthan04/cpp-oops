/*
Shallow and Deep Copy(!Important)
Whenever a copy of the object is done there are two types of copies shallow and deep copy
    1. Shallow Copy
    A shallow copy of an object copies all the member values from one object to another.
    If the member is a value type, a bit-by-bit copy of the member is done.
    If the member is a pointer to memory, then the address is copied but not the memory itself(meaning the address stored in the pointer). So, the memory is shared between the two objects. If one object changes the memory, the other object sees the change.
    Shallow copy is done using the following methods
        - Copy constructor
        - Assignment operator
        - Copy assignment operator
    the default and what we did in copy constructor is same shallow copy

    issue comes in dynamic memory allocation
    !IMPORTANT
    static is when normal we do the function call and all it is static allocation for them in the stack memory and happens during the compile time but if we use new keyword then it is dynamic memory allocation and it happens during the runtime and it is stored in the heap memory like new int a[4] like this

    so issue comes when in class if dynamic allocation we are doing and all then this shallow copy will not work as expected
    so same issue will come in default constructor also


    2. Deep Copy
    compiler wont do deep copy by default so we need to do this and here we need to make a copy for dynamic memory allocation also so when copying we will create a new memory and then copy the value to it(address is copied and both ka will be different) so that the memory is not shared between the two objects
*/

//Example of Shallow Copy
#include<iostream>
using namespace std;

class Student{
    public:
    //this is normal way if this then static and no problem
    // string name;
    // double cgpa;

    //now doing dynamic memory allocation
    string name;
    double *cgpaPtr;//so dynamic allocation
    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;//this is dynamic allocation to the pointer
        *cgpaPtr = cgpa;//so in the pointer we are storing the value(that is in the address of it we are storing the value)
    }

    Student(Student &s){
        this->name = s.name;
        this->cgpaPtr = s.cgpaPtr;//this is shallow copy
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};

int main(){
    Student s1("Rahul",8.5);
    s1.getInfo();

    Student s2(s1);
    //now changing the value of s2
    *(s2.cgpaPtr) = 9.0;//so since shallow copy is happening the value of s1 will also change
    //this is the issue with shallow copy
    s2.getInfo();
    s1.getInfo();
    return 0;
}

/*
The problem is
see first we did s1 which will have name and cgpaptr(say will store address of 8.5 as 555)
then we did s2 which is copy of s1 so it will have name and cgpaPtr only same and cgptPtr will store the address of 8.5 as 555(like value in it is also same 555) so just a shallow copy and now both of them ka cgpaPtr is same(pointing to same and stored value is also same) so if we change the value of s2 then s1 will also change

so the default constructor also does shallow copy and gives same issue
*/

//Example of Deep Copy
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class Student{
    public:
    string name;
    double *cgpaPtr;
    Student(string name,double cgpa){
        this->name = name
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &s){
        this->name = s.name
        cgpaPtr = new double;//so create a new memory for this
        *cgpaPtr = *s.cgpaPtr;//so copy the value from s to this
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
};