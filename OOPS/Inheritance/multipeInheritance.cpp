// Hierarchical inheritance   
#include <bits/stdc++.h>
#include <string>
using namespace std;
class person{
    public:
    string name;
    int age;
};
class student : public person{
    public:
    int rollNo;
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll no: "<<rollNo<<endl;
    }
};
class teacher : public person{
    public:
    string subject;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main(){
    teacher t1;
    cout<<"Teacher Detail"<<endl;
    t1.name="Preety Sharma";
    t1.age = 56;
    t1.subject = "Computer Science";
    t1.getInfo();

    cout<<endl;
    cout<<"Student Detail"<<endl;
    student s1;
    s1.name="Babbu Maan";
    s1.age = 15;
    s1.rollNo = 200251;
    s1.getInfo();
}