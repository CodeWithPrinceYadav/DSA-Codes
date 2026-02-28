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


Day 5 of DSA Journey 🚀
Day 5/100 ✅ 
Today I learned about one of the most important OOP concepts:
🔹 Shallow Copy
🔹 Deep Copy
I understood how the default copy constructor performs shallow copy, where memory addresses are copied instead of actual data.
Deep copy creates a separate memory allocation, which prevents data modification issues and memory conflicts. 🔥 

🔗 github: https://lnkd.in/g32UFtAR
hashtag#Day5 hashtag#100DaysOfCode hashtag#OOPS hashtag#CPP hashtag#DSA hashtag#PlacementPreparation hashtag#github