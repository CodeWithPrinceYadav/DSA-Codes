#include<bits/stdc++.h>
using namespace std;

int convert2decimal(string x){
    int len = x.length();
    int p2 = 1; 
    int num = 0;

    for(int i=len-1 ; i>=0 ; i--){
        if( x[i] == '1' ){
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}

int main(){
    string x;
    cout<<"Enter a Number for converstion: ";
    cin>>x;

    int convert = convert2decimal(x);
    cout<<"Converted value: "<< convert;
}