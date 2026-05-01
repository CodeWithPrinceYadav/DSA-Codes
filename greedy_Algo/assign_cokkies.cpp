#include<bits/stdc++.h>
using namespace std; 
 
int sol(vector<int> &student, vector<int> &cookie){
    sort(student.begin() , student.end());
    sort(cookie.begin() , cookie.end());

    int studentIndex=0, cookieIndex=0;
    int n=student.size(), m=cookie.size();
    while( studentIndex < n && cookieIndex < m){
        if(cookie[cookieIndex] >= student[studentIndex]){
            studentIndex++;
        }
        cookieIndex++;
    }
    return studentIndex;
}
int main(){
    vector<int> student={1,5,3,3,4};
    vector<int> cookie = {4,2,1,2,1,3};

    for(auto it: student) cout<<it<<" ";
    cout<<endl;
    for(auto it: cookie) cout<<it<<" ";
    cout<<endl;


    int ans = sol(student,cookie);
    cout<<"Answer: "<<ans;
}