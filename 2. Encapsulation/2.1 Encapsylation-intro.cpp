/*
Encapsulation
Encapsulation is a way to hide the implementation details of a class and expose only the necessary functionality to the outside world. It is a way to protect the data from accidental corruption. Encapsulation is achieved by declaring the data members of a class as private and providing public methods to access and modify the data. This way, the data is protected from being modified by unauthorized code.

Encapsulation is one of the four fundamental OOP concepts. The other three are inheritance, polymorphism, and abstraction.

Encapsulation is also known as data hiding. It is a way to restrict access to the data members of a class and only allow access through the public methods of the class. This way, the data is protected from being modified by unauthorized code.

Encapsulation is wrapping up of data and member functions in a single unit called class. like the normal way we did in the 1st chapter.
also can do data hiding(where sensitive info is hidden using private and to access it we use public methods like getters and setters).
*/

#include<iostream>
#include<string>
using namespace std;
class Employee{
    private:
        string name;
        int salary;
    public:
        void setName(string n){
            name = n;
        }
        string getName(){
            return name;
        }
};

class Account{
    public:
        string accountId;
        string username;
    private://here we did data hiding by making the data members private
        string balance;
        string password;
};