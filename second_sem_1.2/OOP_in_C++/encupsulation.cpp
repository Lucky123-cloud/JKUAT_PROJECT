// Encupsulation is the tying together of data and methods that operates on that data. This is usually to prevent direct access
// of data by other people or by other functions
// We access the encupsulated properties through thier methods
// And we usually do this through getters and setters

#include <iostream>
using std::string;

class Employee {
private:
//Now here they cannot be accessed unless we are using getters and setters, lets do that. Check down there
    string Name;
    string Company;
    int Age;
public:
// lets make this to be private in order to introduce getters and setters
    // string Name;
    // string Company;
    // int Age; 
    void introduceYourself() {
        std::cout<<"Name - " << Name <<std::endl;
        std::cout<<"Company - "<< Company <<std::endl;
        std::cout<<"Age - "<< Age <<std::endl;
    };

    Employee(string name, string company int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    // getter and setter for name
    void setName(string name) {
        Name = name;
    };

    string getName() {
        return Name;
    };

    //getter and setter for company
    void setCompany(string company) {
        Company = company;
    };
    string getCompany() {
        return Company;
    };

    // getter and setter for age
    void setAge(int age){
        if (age>=18)
        Age = age;
    }

    int getAge() {
        return Age;
    }
};

int main() {
    Employee employee1 = Employee("Lucky", "YT-Luckycodes", 25);
    employee1.introduceYourself();
    Employee employee2 = Employee("John", "Amazon", 23);
    employee2.introduceYourself()

    // How to we now call this getter or setter?
    // check here down...
    employee1.setAge(39);
    std::cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old" << std::endl;

}

// how about some validation rules, say the age can only be of 18 years old - check out the setAge()
// Next we will talk about abstraction
