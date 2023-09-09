#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    cin >>n;

    vector<int> x;
    x.push_back(n);
    while(n != 1){
        if(n%2 ==0){
            n = n/2;
            x.push_back(n);
        }
        else{
            n = 3*n+1;
            x.push_back(n);
        }
    }
    if(x.size() >15){
    for(int i = x.size()-15 ; i < x.size()-1 ; i++){
        cout << x[i] << "->";
    }
    cout <<"1";
    }
    else{
        for(auto i : x){
            if(i != 1){
            cout << i << "->";
            }
            else{
                cout << i;
            }
        }
    }
    return 0;
}