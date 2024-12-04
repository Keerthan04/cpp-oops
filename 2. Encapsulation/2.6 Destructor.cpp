/*
Destructor
- Destructor is a special member function that is called when the lifetime of an object ends.
- It is used to free the memory allocated for the object.

so when object is destroyed it will be deleted and memory will be freed.
default destructor will by default only delete the memory allocated on stack(that is the static memory).
so dynamic memory should be deleted by the programmer(the new and all which are dynamic those shd be deleted and in cpp done using the delete operator).

delete operator
- delete operator is used to deallocate memory that was allocated using new operator.
so see in heap if we have a ptr it is pointing to address say 50(meaning it stores 50 but its address is different say 100) so when we do delete ptr it will delete the memory at 50 and the ptr will still be pointing to 50 but the memory is deleted so it is a dangling pointer.
that is when
    deleter ptr
is done the memory of which it is pointing to that is deleted and we can still do cout<<ptr; but it will give some garbage value.

Destructor has the same name as that of the class but with a tilde(~) symbol before it.

so if memory is not freed then memory leak will occur and the program will run out of memory and crash.
*/

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double *cgpaPtr;//this is dynamic memory so we need to delete it in destructor
    Student(string name,double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    //destructor used(same will be called automatically like the constructor and when main is getting over then object shd be deleted and memory shd be freed during which destructor is called)
    ~Student(){
        cout<<"Destructor called"<<endl;
        delete cgpaPtr;//so shd delete the dynamic allocated memory
    }
};

int main(){
    Student s1("John",3.5);
    cout<<s1.name<<" "<<*s1.cgpaPtr<<endl;
    return 0;
}