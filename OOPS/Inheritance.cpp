#include <bits/stdc++.h>
#include <string>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name, int age){
        this->name = name;
    }
};
class student: public person{
    public:
    int rollNo;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll No: "<<rollNo<<endl;
    }
};

int main(){
    student s1;
    s1.name ="Lord";
    s1.age = 22;
    s1.rollNo = 180;
    s1.getInfo();
}