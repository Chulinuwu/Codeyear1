#include <bits/stdc++.h>

using namespace std;

int main(){


    vector<int> x;
    int n;
    cin >> n;
      int num;
    for(int i = 0; i <n ;i++){
    cin >> num;
    x.push_back(num);
    }


    for(auto i : x){
        cout << i << " ";
    }




    return 0;
}