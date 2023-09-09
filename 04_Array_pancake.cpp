#include <bits/stdc++.h>

using namespace std;

void flip(int x[] , int k){
    for(int i = 0 , j = k; i <= k/2 ; i++ , --j){
        swap(x[i],x[j]);
    }
}

int max_index(int x[], int i){
    int mi = 0;
    for(int j = 1 ; j <= i  ; j++){
        if(x[j] > x[mi]){
            mi = j;
        }
    }
    return mi;
}
void print(int x[] , int n ){
    for(int i = 0 ; i < n ; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
int main(){

    int n;

    cin >> n;

    int x[n];

    for(int i =0 ; i< n ; i++){
        cin >> x[i];
    }
    print(x,n);
    for(int i = n-1 ; i >0 ; i--){
        int max_idx = max_index(x,i);

        if(max_idx!= i){
            if(max_idx >0){
                flip(x,max_idx);
                print(x,n);
            }
            flip(x,i);
            print(x,n);
        }
    }

    return 0;
}