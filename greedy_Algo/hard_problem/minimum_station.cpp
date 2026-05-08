#include <bits/stdc++.h>
using namespace std;

int station(int arr[] ,int dep[] , int n){
    
    sort(arr, arr + n);
    sort(dep, dep + n);
    int i=0, j=0;
    int cnt = 0, maxcnt = 0;

    while(i < n && j < n ){
        if(arr[i] <= dep[j]){
            cnt++;
            i++;
        }
        else{
            cnt--;
            j++;
        }
        maxcnt = max(maxcnt , cnt);
    }
    return maxcnt;
}

int main(){
    int arr[] = {900,945,955,1100,1500,1800};
    int dep[] = {920,1130,1150,1230,1900,2000};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans= station(arr, dep , n);
    cout<<ans;
    return 0;
}