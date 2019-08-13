/*Write a Person class with an instance variable,age,and a constructor that takes an integer,initialAge,as a parameter. The constructor must assign initialAge to age after confirming the argument passed as initialAge is not negative; if a negative argument is passed as initialAge, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In addition, you must write the following instance methods:

yearPasses() should increase the age instance variable by 1.
amIOld() should perform the following conditional actions:
If age<13, print You are young..
If age>=13 and age<18 , print You are a teenager..
Otherwise, print You are old..*/
using namespace std;
#include <iostream>

class Person {
public:
  int age;
  Person(int initialAge);
  void amIOld();
  void yearPasses();
};

Person::Person(int initialAge) {
  // Add some more code to run some checks on initialAge
  if (initialAge >= 0) {
    age = initialAge;
  } else {
    cout << ("Age is not valid, setting age to 0.") << endl;
    age = 0;
  }
}

void Person::amIOld(){
  // Do some computations in here and print out the correct statement to the console 
  if (age < 13) 
  {
    cout<<"You are young.\n";
  }
  else if (age < 18) 
  {
    cout<<"You are a teenager.\n";
  }
  else 
  {
    cout<<"You are old.\n";
  }
}

void Person::yearPasses(){
  // Increment the age of the person in here
  age++;
}


int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
