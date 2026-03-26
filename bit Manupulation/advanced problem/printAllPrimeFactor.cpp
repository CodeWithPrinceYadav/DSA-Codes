#include <bits/stdc++.h>
using namespace std;

vector<int> primeNo(int n){
    vector<int> list;

    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            list.push_back(i);
            n /= i;
        }
    }
    return list;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    vector<int> result = primeNo(n);

    cout << "Prime Numbers are: ";
    for(int x : result){
        cout << x << " ";
    }
}