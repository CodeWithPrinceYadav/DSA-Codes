#include <bits/stdc++.h>
using namespace std;

float calculateTime(vector<int> &jobs){
    sort(jobs.begin(), jobs.end());
    int totalTime= 0 , waitingTime = 0;
    int n = jobs.size();
    for(int i=0 ; i<n ; i++){
        waitingTime += totalTime;
        totalTime += jobs[i];
    }
    return waitingTime/n;
}

int main(){
    vector<int> jobs={4,3,7,1,2};
    for(auto it : jobs){
        cout<<it<<" ";
    }
    cout<<endl;
    int ans = calculateTime(jobs);
    cout<<ans;
}