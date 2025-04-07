//rules of constructor:
// A structore is a method does that does not have a return type;
// it has the same name as the class it belongs to;
// Must be public - to be reviewed later.

// Online C++ compiler to run C++ program online
#include <iostream>
using std::string;

class Employee {
public:
    string Name;
    string Company;
    int Age;
    
    void introduceYourself() {
        std::cout<<"Name - " << Name <<std::endl;
        std::cout<<"Company - "<< Company <<std::endl;
        std::cout<<"Age - "<< Age <<std::endl;
    };

    //now this is a constructor
    Employee(string name, string company int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee employee1 = Employee("Lucky", "YT-Luckycodes", 25);
    // employee1.Name = "Lucky";
    // employee1.Company = "YT-LuckyCodes";
    // employee1.Age = 21;
    employee1.introduceYourself();

    // lets create an employee2
    Employee employee2 = Employee("John", "Amazon", 23);
    // employee2.Name = "John"
    // employee2.Company = "Amazon"
    // employee2.Name = 23;
    employee2.introduceYourself()

    // Now what is we want to create 1000 employees, will we be doing this all time?
    // The answer is NO. This is tiresome, and here we will need to solve this by something called constructor.
    // lets see this in a file called constructor.cpp
}

// We have 3 access modifiers of data:
// 1. private - no one can access it
// 2. Public - can be accessed by anyone
// 3. Protected - cab be accessed but with specifications