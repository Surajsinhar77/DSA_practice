#include <iostream>
#include "student.cpp"  // importing class f
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
}