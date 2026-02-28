//single level inheritance
#include <bits/stdc++.h>
#include <string>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name, int age){
        this->name = name;
        this->age = age;
    }
};
class student: public person{
    public:
    int rollNo;

    student(string name, int age, int rollNo):person(name, age){
        this->rollNo = rollNo;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll No: "<<rollNo<<endl;
    }
};

int main(){
    student s1("Lord Kumar", 20, 9156);
    s1.getInfo();
}