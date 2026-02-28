// Multiple inheritance   
#include <bits/stdc++.h>
#include <string>
using namespace std;
class student{
    public:
    string name;
    int rollNo;
};
class teacher {
    public:
    int salary;
    string subject; 
};
class TA : public student , public teacher{
    public:
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<rollNo<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary;
    }
};

int main(){
   TA ta1;
   ta1.name = "Tony";
   ta1.rollNo = 89746;
   ta1.subject = "Computer science";
   ta1.salary = 25000;
   ta1.getInfo();
}
