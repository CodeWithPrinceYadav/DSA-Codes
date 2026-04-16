#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string &s){
    int n = s.size();
    int HashLen = 256;
    int hash[HashLen];

    for(int i=0 ; i<HashLen ; i++){
        hash[i] = -1;
    }
    
    int l=0 , r=0 , maxlen=0;
    while(r<n){
        if(hash[s[r]]  != -1){
            l = max(hash[s[r]] + 1, l);
        }
            int len = r-l +1;
            maxlen = max(maxlen, len);
            hash [s[r]] = r;
            r++;
        }
        return maxlen;
}

int main(){
    string s = "cadbzabcd";
    cout<<"Given String is: "<<s<<endl;
    int ans = longestSubstring(s);
    cout<<"Largest Substring without repeating character is: "<<ans;
    return 0;
}