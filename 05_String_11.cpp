#include <bits/stdc++.h>

using namespace std;

int main(){

    string x;
    string temp;
    while(getline(cin,x)){
        int xlen = x.length();
        for(int i = 0 ; i <xlen ; i++){
            if((x.substr(i,1) == "!")  || x.substr(i,1) == "@" || x.substr(i,1) == "%" || x.substr(i,1) == "#" || x.substr(i,1) == "$" || x.substr(i,1) == "^" || x.substr(i,1) == "&"){
                temp = x.substr(i,1);
                for(int j = i+1 ; j <xlen ; j++){
                    if((x.substr(j,1) != temp)){
                        cout << x.substr(j,1);
                    }
                    else if(x.substr(j,1) == temp){
                        i = j;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }


    return 0;
}