// Multilevel inheritance   ✅
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
};
class GradStudent  : public student{
    public:
    string research_area;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"roll No: "<<rollNo<<endl;
        cout<<"Research field: "<<research_area<<endl;
    }
};

int main(){
    GradStudent g1;
    g1.name="Preety Sharma";
    g1.research_area = "IOT";
    g1.age = 56;
    g1.rollNo = 21024;
    g1.getInfo();
}