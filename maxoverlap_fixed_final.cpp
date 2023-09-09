#include <bits/stdc++.h>

using namespace std;

int o_area(int start1 , int stop1 , int start2 , int stop2){
    if(start1 >= stop2 || stop1 <= start2){
        return 0;
    }
    else{
        if(start1 < stop2){
            return stop2-start1;
        }
        if(start2 < stop1){
            return stop1-start2;
        }
    }
    return 0;
}

int main(){

    int n;
    cin >> n;

    int start[n];
    int stop[n];

    for(int i = 0 ; i < n ;i++){
        cin >> start[i] >> stop[i];
    }

    int overlap[n][n];
    int max_area = 0;

    for(int i = 0; i < n ; i++){
        for(int j = i+1 ; j < n ;j++){
            overlap[i][j] = o_area(start[i],stop[i],start[j],stop[j]);
            cout << overlap[i][j] << " ";
            if(overlap[i][j] > max_area){
                max_area = overlap[i][j];
            }
        }
    }

    cout << max_area;

    return 0;
}