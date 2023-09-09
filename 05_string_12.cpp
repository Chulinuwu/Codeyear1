#include <bits/stdc++.h>

using namespace std;

int main(){

    string x;
    string sum;
    int sumlastdigits = 0;
    string tod_bf;
    string tod = "0";
    int check = 0;
    int y = 0;
    string result = "0";
    while(true){
        cin >> x;
        if(x == "END"){
            for(int i = result.length(); i > 0 ; i--){
                cout << result.substr(i,1);
            }
            return 0;
        }
        x = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"+ x;
        if(check%2 != 0){
            if(sum.length() < result.length()){
                for(int i = 1 ; i == result.length()-sum.length() ; i++){
                    sum = "0" + sum;
                }
            }
            if(sum.length() < x.length()){
                for(int i = 1 ; i == x.length()-sum.length() ; i++){
                    sum = "0"+ sum;
                }
            }
            // for(int i = result.length(); i > 0 ; i--){
            //     sum.substr(i,1) = result.substr(i,1);
            // }
            // cout << sum << " " << x << endl;
        for(int i = x.length() ,  j = sum.length(); i > 0 , j >0; i-- , j--){
            sumlastdigits =  stoi(x.substr(i-1,1)) + stoi(sum.substr(j-1,1)) + stoi(tod);
            cout << "tod : " << tod << endl;
            cout << "sumlast: " << sumlastdigits << endl;
            if(sumlastdigits >= 10){
                tod_bf = to_string(sumlastdigits);
                tod = tod_bf.substr(0,1);
                sumlastdigits -= 10;
            }
            else{
                tod = "0";
            }
            if(sumlastdigits == 0 && tod == "0"){
                break;
            }

            // cout << "result : " << sumlastdigits << endl;
            result = result + to_string(sumlastdigits);
            // cout << "tod : " << tod_bf << endl;
            // cout << sum.substr(i,1) << endl;
        }
        }
        else{
            tod = "0";
            sum = x;
            sumlastdigits = stoi(x.substr(x.length()-1,1));
            // cout << "round : 1 " << endl;
            // cout << stoi(sum.substr(sum.length()-1-1,1))<< endl;
                }   

        check++;
    }

    // cout << sum << endl;

    return 0;
}

/*
12315646
456465465424

456477781070
*/