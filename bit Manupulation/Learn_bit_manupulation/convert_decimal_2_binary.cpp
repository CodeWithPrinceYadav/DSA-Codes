#include<bits/stdc++.h>
using namespace std;

string convert2binary(int n){
    if(n == 0) return "0"; 

    string res = "";
    while( n>0 ){
        if(n%2==1) res += '1';
        else res += '0';
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int n;
    cout<<"Enter a Number for converstion: ";
    cin>>n;

    string convert = convert2binary(n);
    cout<<"Converted value: "<< convert;
}