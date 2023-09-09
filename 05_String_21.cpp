#include <bits/stdc++.h>

using namespace std;


int main(){

    string x;
    cin >> x;
    int xlen = x.length();
    int checker= 0;

    for(int i = 0 ; i< xlen ; i++){
        if(i == 0){
            cout << x.substr(0,1);
            if(x.substr(i,1) == "0" || x.substr(i,1) == "1" || x.substr(i,1) == "2" ||x.substr(i,1) == "3" ||x.substr(i,1) == "4" ||x.substr(i,1) == "5" || x.substr(i,1) == "6" || x.substr(i,1) == "7" || x.substr(i,1) == "8" || x.substr(i,1) == "9"){
                checker = 1;
            }
            // for(int j = 1 ; j < x.length() ; j++){
            //     if(x.substr(j,1) == "A" ||x.substr(j,1) == "B" || x.substr(j,1) == "C" || x.substr(j,1) == "D" || x.substr(j,1) == "E" || x.substr(j,1) == "F" || x.substr(j,1) == "G" || x.substr(j,1) == "H" || x.substr(j,1) == "I" || x.substr(j,1) == "J" || x.substr(j,1) == "K" || x.substr(j,1) == "L" || x.substr(j,1) == "M" || x.substr(j,1) == "N" ||x.substr(j,1) == "O" || x.substr(j,1) == "P" || x.substr(j,1) == "Q" || x.substr(j,1) == "R" || x.substr(j,1) == "S" ||x.substr(j,1) == "T" || x.substr(j,1) == "U" ||x.substr(j,1) == "V" || x.substr(j,1) == "W" || x.substr(j,1) == "X" || x.substr(j,1) == "Y" || x.substr(j,1) == "Z" ){
            //         break;
            //     }
            //     else{
            //         cout << x.substr(j,1);
            //     }
            // }
        }
        if(i != 0){
        // if(x.substr(i,1) == "0" || x.substr(i,1) == "1" || x.substr(i,1) == "2" ||x.substr(i,1) == "3" ||x.substr(i,1) == "4" ||x.substr(i,1) == "5" || x.substr(i,1) == "6" || x.substr(i,1) == "7" || x.substr(i,1) == "8" || x.substr(i,1) == "9"){
        //     cout << ", " <<x.substr(i,1);
        //     for(int j = i+1 ; j < x.length() ; j++){
        //         if(x.substr(j,1) == "0" || x.substr(j,1) == "1" || x.substr(j,1) == "2" ||x.substr(j,1) == "3" ||x.substr(j,1) == "4" ||x.substr(j,1) == "5" || x.substr(j,1) == "6" || x.substr(j,1) == "7" || x.substr(j,1) == "8" || x.substr(j,1) == "9"){
        //             cout << x.substr(j,1);
        //         }
        //         else{
        //             i = j-1;
        //             break;
        //         }
        //     }
        // }
        if(x.substr(i,1) == "A" ||x.substr(i,1) == "B" || x.substr(i,1) == "C" || x.substr(i,1) == "D" || x.substr(i,1) == "E" || x.substr(i,1) == "F" || x.substr(i,1) == "G" || x.substr(i,1) == "H" || x.substr(i,1) == "I" || x.substr(i,1) == "J" || x.substr(i,1) == "K" || x.substr(i,1) == "L" || x.substr(i,1) == "M" || x.substr(i,1) == "N" ||x.substr(i,1) == "O" || x.substr(i,1) == "P" || x.substr(i,1) == "Q" || x.substr(i,1) == "R" || x.substr(i,1) == "S" ||x.substr(i,1) == "T" || x.substr(i,1) == "U" ||x.substr(i,1) == "V" || x.substr(i,1) == "W" || x.substr(i,1) == "X" || x.substr(i,1) == "Y" || x.substr(i,1) == "Z" || x.substr(i,1) == "0" || x.substr(i,1) == "1" || x.substr(i,1) == "2" ||x.substr(i,1) == "3" ||x.substr(i,1) == "4" ||x.substr(i,1) == "5" || x.substr(i,1) == "6" || x.substr(i,1) == "7" || x.substr(i,1) == "8" || x.substr(i,1) == "9"){
            if(checker == 1){
                cout << x.substr(i,1);
            }
            else{
            cout << ", ";
            cout << x.substr(i,1);
            }
            if(x.substr(i,1) == "0" || x.substr(i,1) == "1" || x.substr(i,1) == "2" ||x.substr(i,1) == "3" ||x.substr(i,1) == "4" ||x.substr(i,1) == "5" || x.substr(i,1) == "6" || x.substr(i,1) == "7" || x.substr(i,1) == "8" || x.substr(i,1) == "9"){
                int count = 0;
                for(int j = i+1 ; j <xlen ; j++){
                    if(x.substr(j,1) == "0" || x.substr(j,1) == "1" || x.substr(j,1) == "2" ||x.substr(j,1) == "3" ||x.substr(j,1) == "4" ||x.substr(j,1) == "5" || x.substr(j,1) == "6" || x.substr(j,1) == "7" || x.substr(j,1) == "8" || x.substr(j,1) == "9"){
                        count++;
                        cout << x.substr(j,1);
                        i++;
                    }
                    else{
                        cout << ", " << x.substr(j,1);
                        i++;
                        break;
                    }
                }
                // cout << "i : " << i << " ";
                // i = temp-1+count;
                continue;
            }
            for(int j = i+1 ; j <xlen ; j++){
                if(x.substr(j,1) == "A" ||x.substr(j,1) == "B" || x.substr(j,1) == "C" || x.substr(j,1) == "D" || x.substr(j,1) == "E" || x.substr(j,1) == "F" || x.substr(j,1) == "G" || x.substr(j,1) == "H" || x.substr(j,1) == "I" || x.substr(j,1) == "J" || x.substr(j,1) == "K" || x.substr(j,1) == "L" || x.substr(j,1) == "M" || x.substr(j,1) == "N" ||x.substr(j,1) == "O" || x.substr(j,1) == "P" || x.substr(j,1) == "Q" || x.substr(j,1) == "R" || x.substr(j,1) == "S" ||x.substr(j,1) == "T" || x.substr(j,1) == "U" ||x.substr(j,1) == "V" || x.substr(j,1) == "W" || x.substr(j,1) == "X" || x.substr(j,1) == "Y" || x.substr(j,1) == "Z"  || x.substr(j,1) == "0" || x.substr(j,1) == "1" || x.substr(j,1) == "2" ||x.substr(j,1) == "3" ||x.substr(j,1) == "4" ||x.substr(j,1) == "5" || x.substr(j,1) == "6" || x.substr(j,1) == "7" || x.substr(j,1) == "8" || x.substr(j,1) == "9"){
                    // i++;
                    break;
                }
                else{
                    cout << x.substr(j,1);
                    i++;
                }
            }
        }
        else{
           cout << x.substr(i,1);
        }
        }
        // cout << "i : " << i << endl;
    }

    return 0;
}

/*
happyBirthDay2023ur
*/