#include <bits/stdc++.h>

using namespace std;

void erase_all(vector<int> &x,int num){
    auto itr = x.begin();
    

    while(itr != x.end()){
        if(*itr == num){
        itr = x.erase(itr);
        }
        else{
        itr++;
        }
    }
}

int main(){


    vector<int> x;

    int n;
    cin >> n;  

    int num;

    for(int i = 0 ; i < n ; i++){
        cin >> num;
        if(i%2 == 0){
            x.push_back(num);
        }
        else{
            x.insert((x.begin()),num);
        }

    }


    // cout << "asda";
    // erase_all(x,5);
    for(auto &i : x){
        cout << i << " ";
    }


    return 0;
}