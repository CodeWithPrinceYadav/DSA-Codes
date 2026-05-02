#include<bits/stdc++.h>
using namespace std; 

bool lemonade(vector<int> &arr){
    int five=0, ten=0;
    int n= arr.size();
    for(int i=0 ; i<n ; i++){
        if(arr[i] == 5) five++;

        else if(arr[i]==10){
            if(five){
                ten++;
                five--;
            }
            else {
                return false;
            }
        }

        else{
            if(ten >= 1 && five >= 1){
                five--;
                ten--;                
            }

            else if(five >= 3) {
                five -=3;
            }
            else{
                return false;
            }
        }
    }
    return true;
};

int main(){
    vector<int> arr={5,5,5,10,10,20};
    bool ans = lemonade(arr);
    cout<< boolalpha <<ans;
}