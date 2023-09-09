#include <bits/stdc++.h>

using namespace std;

int main(){
    
    char date[1000];
    int day[1000];
    char month[1000];

    cin >> date;

    if(int(date[3])-48 == 0){
         if(int(date[4])-48 == 1){
                cout << "JAN ";
        }
        if(int(date[4])-48 == 2){
                cout << "FEB ";
        }
        if(int(date[4])-48 == 3){
                cout << "MAR ";
        }
        if(int(date[4])-48 == 4){
                cout << "APR ";
        }
        if(int(date[4])-48 == 5){
                cout << "MAY ";
        }
        if(int(date[4])-48 == 6){
                cout << "JUN ";
        }
        if(int(date[4])-48 == 7){
                cout << "JUL ";
        }
        if(int(date[4])-48 == 8){
                cout << "AUG ";
        }
        if(int(date[4])-48 == 9){
                cout << "SEP ";
        }
    }
    else{
        if(int(date[4])-48 == 0){
                cout << "OCT ";
        }
        if(int(date[4])-48 == 1){
                cout << "NOV ";
        }
        if(int(date[4])-48 == 2){
                cout << "DEC ";
        }
    }

    for (int i = 0 ; i <= 1 ; i++){
            day[i] = date[i]-48;
            if(day[i] == 0){
                continue;
            }
            cout << day[i];
    }
    
    cout << ", ";
    
    int year_beta[1000];

    for(int i = 9 , k = 0 ; i >= 6 , k <= 3 ; i-- , k++){
        year_beta[k] = int(date[i]-48);
    }

    // for (int i = 0 ; i <= 3 ; i++){
    //      cout << year_beta[i];
    // }
    
    int year = (year_beta[3]*1000) + (year_beta[1]*10) + (year_beta[2]*100) + year_beta[0];
    cout << year - 543;

    return 0;
}
/*
12/01/2562
JAN 12, 2019
*/