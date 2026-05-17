#include<bits/stdc++.h>
using namespace std; 

bool isValid(string s){
    int minOpen = 0;
    int maxOpen = 0;
    
    for(char c: s){
        if(c=='('){
            minOpen++;
            maxOpen++;
        }
        else if(c==')'){
            minOpen--;
            maxOpen--;
        }
        else{
            minOpen--;
            maxOpen++;
        }
        if (maxOpen < 0) return false;
        minOpen = max(minOpen,0);
    }
    return minOpen==0;
}

int main(){
    string s = "()*)*()(";
    bool ans = isValid(s);
    cout << boolalpha << ans;
}
