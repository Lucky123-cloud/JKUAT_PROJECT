// abstruction - Hiding complex things behind a procedure that makes those things look simple

#include <iostream>
using std::string;

// lets say we want to implement another thing where employee can ask for prmotion, but here there are complex things that only the
// boss can think of when considering someone for promotion - we do not have to know, ONLY the boss knows about it.
// lets implement this - check out the AbstractEmployee class

class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:

    string Name;
    string Company;
    int Age;
public:
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

    void askForPromotion() {
        if (age > 30)
            std::cout<<Name<<" got promoted!" << std::endl;
        else
            std::cout<<Name<<" sorry no promotion for you!" << std::endl;
    }

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
    // employee1.introduceYourself();
    Employee employee2 = Employee("John", "Amazon", 23);
    // employee2.introduceYourself()

    // employee1.setAge(39);
    // std::cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old" << std::endl;

    employee1.askForPromotion(); 
    employee2.askForPromotion();

}
