#include <bits/stdc++.h>
#include <string>
using namespace std;
class student{
    public:
    string name;
    double* cgpaptr;
    
    student(string name, double cgpa){
        this -> name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"cgpa: "<<*(cgpaptr)<<endl;
    }
    //i am a destructor
    ~student(){           
        cout<<"i am a destructor";
        delete cgpaptr;
    }
};

int main(){
    student s1("Babbu maan", 9.5);
    s1.getInfo();
};