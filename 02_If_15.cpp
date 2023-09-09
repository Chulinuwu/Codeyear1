#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    string number;

    cin >> number;

    // cout << number.substr(0,2) << endl;

    if(number.length() != 10){
        cout << "Not a mobile number";
    }
    else{
        if(number.substr(0,2) == "06" ||  number.substr(0,2) == "08" || number.substr(0,2) == "09"){
            cout << "Mobile number";
        }
        else{
            cout << "Not a mobile number";
        }
    }

    return 0;
}