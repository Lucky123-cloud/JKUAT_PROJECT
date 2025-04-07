// create a structure  person with  members' id, age, height and weight . 
// Write  a program that shows how this structure is implemented  in main.
// In main,  the programs also compute the Body Mass Index (BMI) given as
// weight  (kg)/height2 (m2).
// The data is input by the user through program prompting and re-echo the same on the
// screen in an appropriate  format  

#include <iostream>
#include <iomanip> //for setprecison
using namespace std;

struct Person {
    int id;
    int age; 
    float height;  //in meters
    float weight; //in kilograms

};

int main() {
  Person p;

  //prompts user for input
  cout << "Enter person ID:  ";
  cin >> p.id;

  cout <<"Enter age: ";
  cin >> p.age;

  cout << "Enter height (in meters): ";
  cin >> p.height;

  cout <<"Enter weight (in Kilograms): ";
  cin >> p.weight;

  //compute BMI
  float bmi = p.weight / (p.height * p.height);

  //display results
  cout << "\n--- Person Details ---\n";
  cout<< "ID: " << p.id << endl;
  cout<< "Age: " << p.age << "years" << endl;
  cout<< fixed << setprecision(2); //to show BMI and other floats with 2 decimal places
  cout<< "Height: " << p.height <<" m" << endl;
  cout<< "Weight: " << p.weight <<" kg" << endl;
  cout<< "Body Mass Index(BMI): " << bmi << endl;
  
  return 0;
}