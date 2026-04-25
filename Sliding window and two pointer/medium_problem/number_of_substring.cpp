#include <bits/stdc++.h>
using namespace std;

int numberOfsubstring(string s){
    vector<int> freq(3,0);
    int res = 0;
    int left = 0;

    for(int right=0 ; right<s.length() ; right++){
        freq[s[right] - 'a']++; 

    while(freq[0]>0 && freq[1]>0 && freq[2]>0){
        res += (s.length() - right);
        freq[s[left] -'a']--;
        left++;
        }
    }
    return res;
}

int main(){
    string s = "bbacba";
    cout<<"String is: "<< s <<endl;
    
    
    int ans = numberOfsubstring(s);

    cout << "Answer : " << ans;
}