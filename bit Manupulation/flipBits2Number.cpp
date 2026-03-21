#include<bits/stdc++.h>
using namespace std; 
 
//flip bits to convert Number
int countSetBits( int start , int goal){;
    int ans = start ^ goal;
    int cnt = 0;
    for (int i=0; i < 32 ; i++){
        if (ans & (i<<i)) cnt ++;
    }
    return cnt++;
}


int main(){
    int start , goal;
    cout<<"Enter Start, Goal : ";
    cin >> start >> goal;

    int ans = countSetBits(start , goal);
    cout<<"Flip bits are: "<<ans ; 
}