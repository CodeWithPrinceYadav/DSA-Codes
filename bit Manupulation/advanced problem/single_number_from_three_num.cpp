#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr){
    int n = arr.size();
    for(int i=n-1 ; i>=1 ; i--){
        for(int j=0 ; j<n-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int printValue(vector<int> &arr){
    bubble_sort(arr);
    int n = arr.size();
    
    for(int i = 1; i<n; i=i+3){
        if(arr[i] != arr[i-1]) return arr[i-1];
    }
    return arr[n-1];
}

int main(){
    vector<int>arr = {2,2,4,6,2,6,6};
    int ans=printValue(arr);
    cout<<"Single Value is: "<<ans;
}