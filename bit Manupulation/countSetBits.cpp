#include<bits/stdc++.h>
using namespace std; 
 
//count the number of set bits
int countSetBits(int n){;
    int cnt = 0;
    while(n>1){
        cnt += n&1;
        n=n>>1;
    }
    if (n==1) cnt++;
    return cnt;
}


int main(){
    int n;
    cout<<"Enter Number: ";
    cin >> n;
    int ans = countSetBits(n);
    cout<<ans ; 
}