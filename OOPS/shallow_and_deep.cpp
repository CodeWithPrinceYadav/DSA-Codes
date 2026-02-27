#include <bits/stdc++.h>
#include <string>
using namespace std;

class student{
    public:
    string name;
    double* cgpaPtr;
        
    student(string name, double cgpa){      //construtor 
        this->name = name;
        cgpaPtr = new double;    
        *cgpaPtr = cgpa;
        }

    // Deep Copy Constructor
    student(student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }
    void getInfo(){
        cout<<"Student Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    }
    };

int main(){
    student s1("Babbu Maan", 9.4);
    s1.getInfo();
    student s2(s1);
    *(s2.cgpaPtr)= 7.5;
    s2.getInfo();
};
