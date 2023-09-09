#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        int n,m;
        string a,b;
        cin >> a >> n >> b >> m;

        string input = "0000";

        for(int i = 0 ; i < n ; i++){
            input = input + a;
        }
        for(int i = n ; i < m+n ; i++){
            input = input + b;
        }

        // cout << stoi(input.substr(input.length()-5, 5)) << endl;
        int checker = 0;
        unsigned long long int max = stoull(input);
        
        for(int i = 2 ; i*i < max; i++){
            if(max%i == 0){
                checker = 1;
            }
        }

        if(checker == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        // cout << stoi(input);
    }

    return 0;
}