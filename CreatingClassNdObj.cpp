#include "student_class.cpp" // importing class file
#include <iostream>
using namespace std;

// Creating class
// class student {
// public:
//   string name;
//   int age;
//   string StudentClass;
// };

// making function for creating objects
void entryFunc(string name, int age, string stdClass) {
  student ob3;
  ob3.name = name;
  ob3.age = age;
  ob3.StudentClass = stdClass;
}

int main() {

  // Creating statatic object
  student ob;
  ob.name = "Suraj Kumar";
  ob.age = 22;
  ob.StudentClass = "BE";

  student ob1;
  ob1.name = "Aditaya Kumar";
  ob1.age = 22;
  ob1.StudentClass = "BTECH";

  cout << ob.name << endl;
  cout << ob1.StudentClass << endl;

  student ob3;

  // Making static object by Functions
  entryFunc("Vikee Sinha", 18, "XII");

  // making Dynamic Objects
  student *obj4 = new student;

  (*obj4).name = "Pj";
  (*obj4).age = 20;
  (*obj4).StudentClass = "Btech";

  // printing dynamic objects
  cout << (*obj4).name << endl;

  // To access dynamic Object property using (*ob_name).property_name = value OR
  // ojname -> property_name = Value;
  student *obj5 = new student;

  obj5->name = "Ubnknown";
  obj5->age = 0;
  obj5->StudentClass = "Un";

  // printing dynamic objects
  cout << obj5->name << endl;

  // end aaj 07 - 06 - 2022  Time   2:09am
}