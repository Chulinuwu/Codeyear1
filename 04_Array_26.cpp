#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n; // จำนวนแถวของตาราง

    int x[n][n];
    int col_of_zero = 0; // หมายเลขที่ 0 อยู่
    int z = 0;
    int temp[10000];
    int inversion = 0; // amount of inversions


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> x[i][j]; //ช่องแรกเก็บแนวตั้ง ช่องสองเก็บแนวนอน
            if(x[i][j] == 0){
                col_of_zero = i;
            }
            if(x[i][j] != 0){
                temp[z] = x[i][j];
                z++;
            }
        }
    }

    for(int i = 0 ; i < z ; i++){
       for(int j = i ; j < z ; j ++){
        if(temp[i] > temp[j]){
            inversion++;
        }
       }
    }
    
    if(n%2 != 0 && inversion%2 == 0){
        cout << "YES";
        return 0;
    }
    if(n%2 == 0 && inversion%2!= 0 && col_of_zero%2 == 0){
        cout << "YES";
        return 0;
    }
    if(n%2 == 0 && inversion%2== 0 && col_of_zero%2 != 0){
        cout << "YES";
        return 0;
    }
    
    cout << "NO";


    return 0;
}
/*
3
1 2 0
3 5 6
4 7 8
*/