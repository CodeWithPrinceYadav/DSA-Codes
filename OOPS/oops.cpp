#include <bits/stdc++.h>
#include <string>
using namespace std;
class teacher{
//constructor  without parameter
    // public:
    // teacher(){     
    //      cout<< "I am a Constructor"<<endl;
    //      dept="CSE";
    // }

    private:
    double salary;
    
    public:
    string name;
    string subject;
    string dept;

//constructor  with parameter
    teacher(string Name, string dept, string subject, double salary ){
        this ->name = name;
        this ->dept = dept;
        this ->subject = subject;
        this ->salary = salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Dept: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout << "Salary: " << salary << endl;
    }
};

//     void setSalary (double s){
//         salary=s;
//     }
//     double getSalary(){
//         return salary;
// };

int main(){
    
    teacher t1 ("Babbu Maan", "CSE", "C++", 50000);
    t1.getInfo();
    // t1.name = "Babbu Maan";
    // t1.subject = "C++";
   // t1.dept = "CSE";

    // cout<<t1.name<<endl;
    // t1.setSalary(25000);
    // cout<<t1.getSalary()<<endl;

    // cout<<t1.dept<<endl;
};