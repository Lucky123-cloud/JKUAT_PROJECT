// abstruction - Hiding complex things behind a procedure that makes those things look simple

#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void askForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void introduceYourself() {
        std::cout<<"Name - " << Name <<std::endl;
        std::cout<<"Company - "<< Company <<std::endl;
        std::cout<<"Age - "<< Age <<std::endl;
    };

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    void askForPromotion() {
        if (Age > 30)
            std::cout<<Name<<" got promoted!" << std::endl;
        else
            std::cout<<Name<<" sorry no promotion for you!" << std::endl;
    };
    
    virtual void Work() {
        std::cout<<Name<<" is doing task management, email marketing, social media management..."<<std::endl;
    };

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

class Developer:public Employee {
public:
    string favProgrammingLanguage;
    
    Developer(string name, string company, int age, string language):Employee(name, company, age){
        favProgrammingLanguage = language;
    };
    
    void Work() {
        std::cout<<Name<<" is coding, in  "<<favProgrammingLanguage<<std::endl;
    };
    
    void fixBug() {
        std::cout<<getName()<<" fixed bugs using "<< favProgrammingLanguage << std::endl;
    };
};

class Teacher:public Employee {
public:
    string Subject;
    void prepareLesson() {
        std::cout<<Name<<" is preparing for "<<Subject<<" lesson"<<std::endl;
    };
    Teacher(string name, string company, int age, string subject):Employee(name, company, age) {
        Subject = subject;
    };
    
     void Work() {
        std::cout<<Name<<" is teaching "<<Subject<<std::endl;
    };
    
};

int main() {
    Developer d = Developer("Lucky", "YT-LuckyCodes", 25, "C++");
    d.fixBug();
    d.askForPromotion();
    Teacher t = Teacher("Jack", "Cool School", 35, "History");
    t.prepareLesson();
    t.askForPromotion();
    // t.Work();
    // d.Work();
    // The most common use of polymorphism is when a parent
    // class reference is used to refer to a child class object
    Employee *e1 = &d;
    Employee *e2 = &t;
    
    e2->Work();
    e2->Work();

};
