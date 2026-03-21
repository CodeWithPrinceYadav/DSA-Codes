#include<bits/stdc++.h>
using namespace std;

int main(){
    //right shift operator
    // int n = 13;
    // int ans = n>>1;
    // cout<<ans;

    //right shift operator
    // int n = 13;
    // int ans = n<<1;
    // cout<<ans;

    //swap two number  xor operator
    // int a = 5; 
    // int b = 6;
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // cout<<a;

    //check if the ith bit is set or not

    int n=13 ,i;
    cout<<"Enter i th value: ";
    cin>>i;
    
    if (n & (1 << i))
        cout << "true";
    else
       cout << "false";

}