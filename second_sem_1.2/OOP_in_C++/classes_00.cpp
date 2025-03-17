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
};

int main() {
    Employee employee1;
    employee1.Name = "Lucky";
    employee1.Company = "YT-LuckyCodes";
    employee1.Age = 21;
    employee1.introduceYourself();

    // lets create an employee2
    Employee employee2;
    employee2.Name = "John"
    employee2.Company = "Amazon"
    employee2.Name = 23;

    // Now what is we want to create 1000 employees, will we be doing this all time?
    // The answer is NO. This is tiresome, and here we will need to solve this by something called constructor.
}

// We have 3 accessers of data:
// 1. private - no one can access it
// 2. Public - can be accessed by anyone
// 3. Protected - cab be accessed but with specifications