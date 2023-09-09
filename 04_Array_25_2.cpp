#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int h[n];

    for(int i = 0 ; i < n ; i ++){
        cin >> h[i];
    }
    int max_h_right;
    int max_h_left;
    int min_hx;

    int sum = 0;
    int checker = 0;
    for(int i = 0 ; i <n-1 ; i++){
        checker = 0;
        max_h_left = h[i];
        max_h_right = h[i];
        if(i >0){
        for(int j = i ; j < n ; j++){
        if(max_h_right < h[j]){
            max_h_right = h[j];
        }
        }
        for(int j = i ; j >= 0 ; j--){
            if(max_h_left < h[j]){
                max_h_left = h[j];
                checker = 1;
                // cout << "max_left : " << max_h_left << endl;
            }
        }
        if(checker != 0){
        min_hx = min(max_h_right,max_h_left);
        sum += min_hx-h[i];
        }
        // cout << sum <<" ";
        }
    }

    cout << sum;
    return 0;
}

/*
14
1 4 2 5 1 1 4 2 3 1 6 4 5 1
*/