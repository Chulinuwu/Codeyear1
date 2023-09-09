#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    int start;
    int stop;
    cin >> n;
    int temp[10000] = {0};
    for(int i = 0 ; i < n ; i++){
        cin >> start >> stop;
        for(int i = start ; i < stop ;i++){
            temp[i-1]++;
        }
    }

    sort(temp,temp+10000,greater<int>());

    cout <<temp[0];


    return 0;
}