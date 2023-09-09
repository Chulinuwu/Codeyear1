#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int start[n];
    int stop[n];

    for(int i = 0; i < n ; i++){
        cin >> start[i] >> stop[i]; 
    }

    string temp[n][1000];
    vector<int> x;

    int z = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0 ; j < stop[i]-start[i] ; j++){
            temp[i][j] = to_string(start[i]+j) + to_string(start[i]+j+1);
            // cout << temp[i][j] << " ";
            z = stoull(temp[i][j]);
            x[z]++;
        }
        // cout << endl;
    }

    // sort(x,x+x.size(),greater<int>());

    cout << x.size();


    return 0;
}

/*
5
1 5
2 7
3 8
4 6
9 10
*/