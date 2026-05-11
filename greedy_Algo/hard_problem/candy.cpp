#include <bits/stdc++.h>
using namespace std;

int candy(vector<int>& rating){
    int n = rating.size();
    vector<int> left(n) , right(n);
    left[0] = 1 , right[n-1] = 1;
    

    for(int i =1 ; i< n-1 ; i++){

        if(rating[i]>rating[i-1]){
            left[i] = left[i-1]+1;
        }
        else left[i] = 1;

    }
    for (int j= n-2 ; j>=0 ; j--){
        if(right[j]>right[j+1]){
            right[j] = right[j+1] +1;
        }
        else right[j] = 1;
    }

    int sum =0;
    for(int k=0 ; k<n-1; k++){
        sum += max(left[k], right[k]);
    }
    return sum;
}

int main(){
    vector<int> rating= {1,3,2,1};
    int ans = candy(rating);
    cout<<ans;
}