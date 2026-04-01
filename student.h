#include "MU_Person.h"
#include <iostream>
#include <string>
using namespace std;

class student:public MU_person{
private:
    double gpa; 
	
public:
    student(long=111 ,double=2.5,string="Nattawut");
    ~student();
    void display(); // display_person
   
};

student::student(long i, double g,string s):MU_person(i,s){
// Finish constructor to set all values
        id = i;
        name = s;
        gpa = g;
        cout<<"MU student constructor  "<<gpa<<endl;
}
student::~student(){
     cout<<"-------"<<endl;
     cout<<"student destructor "<<gpa<<endl; 
}


void student::display(){
  //Finish Display function
  display_person();
  //display_Thai();
  cout<<"GPA: "<<gpa<<endl;
}
