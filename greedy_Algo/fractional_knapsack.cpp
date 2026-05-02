#include<bits/stdc++.h>
using namespace std; 
   

struct Item{
    int value;
    int weight;
};

class Solution{
    public:
    bool static comp(Item a, Item b){
        double r1= (double) a.value / (double) a.weight;
        double r2= (double) b.value / (double) b.weight;
        return r1>r2;
    }
    double knapsack(int W, Item arr[], int n){
        sort(arr,arr+n,comp);
        int currWeight = 0;
        double finalvalue = 0;

        for(int i = 0; i<n ; i++ ){
            if(currWeight + arr[i].weight <= W){
                currWeight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            else{
                int remain = W-currWeight;
                finalvalue += (arr[i].value/(double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return finalvalue;
    }
};

int main(){
    int n = 3, weight = 50;
    Item arr[n] ={{100,20} , {60,10} , {120,30}};
    Solution obj;
    double ans = obj.knapsack(weight , arr , n);
    cout<<"The Maximum Value is: "<< fixed << setprecision(2) << ans;
}