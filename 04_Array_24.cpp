#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int x[n];
    int temp[n];
    int temp_comp[n];
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> x[i];
        temp[i] = x[i];
        temp_comp[i] = x[i];
    }
    sort(temp_comp,temp_comp+n);
    sort(temp,temp+n,greater<int>());

    int count_temp = 0;
    for(int i = 0 ; i < n ; i++){
        count_temp = 0;
        for(int k = 0 ; k <n ; k++){
            if(x[k] == temp_comp[k]){
                count_temp++;
            }
        }
            if(count_temp == n){
                for(int j = 0 ; j < n ; j++){
                    cout << x[j] << " ";
                }
                break;
        }
        count_temp =0;
        if(temp[0] == x[i]){
            // cout <<"1 i : " << i << endl;
            for(int j = 0 ; j < (i+1)/2; j++){
                swap(x[j],x[i-j-count]);
            }
            for(int j = 0 ; j < n ; j++){
                cout << x[j] << " ";
            }
            for(int k = 0 ; k <n ; k++){
            if(x[k] == temp_comp[k]){
                count_temp++;
            }
            }
            if(count_temp == n){
                break;
            }
            cout << endl;
            for(int j = 0 ; j < n/2 ; j++){
                if(n%2 == 0){
                    swap(x[j],x[n-j-count]);
                }
                else{
                    swap(x[j],x[n-j-1-count]);
                }
            }
            for(int j = 0 ; j < n ; j++){
                cout << x[j] << " ";
            }
            if(x[n-1] == temp[0]){
            count++;
            }
            temp[0] = -1;
            sort(temp,temp+n,greater<int>());
            cout << endl;
            // cout << " count temp[1] : " << count_temp << endl;
            i = 0;
            for(int k = 0 ; k <n ; k++){
            if(x[k] == temp_comp[k]){
                count_temp++;
            }
            // cout << count_temp << " ";
        }
        
        if(temp[0] == x[0]){
            count_temp = 0;
            // cout <<"2 i : " << i << endl;
            for(int j = 0 ; j < n/2 ; j++){
                if(n%2 == 0){
                    swap(x[j],x[n-j-count]);
                }
                else{
                    swap(x[j],x[n-j-1-count]);
                }
            }
            for(int j = 0 ; j < n ; j++){
                cout << x[j] << " ";
            }
            if(x[n-1] == temp[0]){
            count++;
            }
             for(int k = 0 ; k <n ; k++){
            if(x[k] == temp_comp[k]){
                count_temp++;
            }
            // cout << count_temp << " ";
        }
            temp[0] = -1;
            sort(temp,temp+n,greater<int>());
            cout << endl;
            // cout << " count temp[2] : " << count_temp << endl;
            i = 0;
        }
        // cout << endl;
    }
    }



    // cout << endl << 5/2;

    return 0;
}
/*
5
3 1 2 5 4

*/
