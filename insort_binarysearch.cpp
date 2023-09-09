#include <bits/stdc++.h>

using namespace std;

void insort_binary(int num2, vector<int> &x){
    int mid = 0;
    int L = 0;
    int R = x.size();
    while(L < R){
        mid = (L+R-1)/2;
        if(num2 < x[mid]){
            R = mid;
        }
        else if(num2 > x[mid]){
            L = mid+1;
        }
        else if(num2 == x[mid]){
            L = mid;
            R = mid;
        }
    }
    x.insert(x.begin()+L,num2);
    return;
}

int main(){


    vector<int> x;
    int z = 0;
    int num;
    cin >> num;
    x.push_back(num);

    while(true){

        cin >> num;
        int check = 0;
        if(num == -999){
            break;
        }
        for(int i = 0 ; i < x.size() ; i++){
            if(num <= x[i]){
                x.insert(x.begin()+i, num);
                check = 1;
                break;
            }
        }
        if(check == 0){
            x.push_back(num);
        }
    }

    for(auto e :x){
        cout << e << " ";
    }
    cout << endl;
    int num2;
    cin >> num2;

    insort_binary(num2,x);

    for(auto e :x){
        cout << e << " ";
    }
    // cout << endl;
    // cout << x[6] << endl;
    // cout << x[L+R/2];

    return 0;
}

/*
5 1 21 987 5421 442 548 642 12 3 5 7 69 43 -999

10 12 6 9 2 22 23 20 -999
7
*/