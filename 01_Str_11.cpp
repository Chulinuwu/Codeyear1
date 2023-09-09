#include <bits/stdc++.h>

using namespace std;

int main(){

    char input[1000];

    cin >> input;

    int x = 0;
    
    
    for(int i = 0; i < 12; i++){
        x += (13 - i) * ((int)input[i] - 48);
    }


    int y = (11 - x%11)%10;
    
   cout << input[0];
   cout << "-";
    // cout << input[0] << "-" << input[1] << input[2] << input[3] << input[4] << "-" << input[5] << input[6] << input[7] << input[8] << input[9] << "-"<< input[10] << input[11] << "-" << y;
    for(int i = 1 ; i <= 4 ; i++){
        cout << input[i];
    }
    cout << "-";
    for(int i = 5 ; i <= 9 ; i++){
        cout << input[i];
    }
    cout << "-";
    for(int i = 10 ; i <= 11 ; i++){
        cout << input[i];
    }
    cout << "-" << y;




    return 0;
}