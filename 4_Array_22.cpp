#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;
    cin.ignore();

    string x[n];
    string op;
    string temp[n];

    for(int i = 0 ; i < n ; i++){
        cin >> x[i];
        cin.ignore();
    }

    getline(cin,op);

    for(int i = 0 ; i < n ; i++){
        temp[i] = x[i];
        // cout << "x[" << i << "] : " << x[i] << endl; 
    }
    // cout << "op : " << op << endl;  

    for(int i = 0 ; i < op.length() ; i++){
        if(op.substr(i,1) == "C"){
            int count= 0;
            for(int i = 0 ; i < n/2 ; i++){
                swap(x[i], x[n/2+count]);
                swap(temp[i], temp[n/2+count]);
                count++;
            }
        }
        if(op.substr(i,1) == "S"){
            int count = 0;
            int count_back = n/2;
            for(int i = 0 ; i < n ; i++){
                if(i%2 == 0){
                   x[i] =  temp[count];
                   count++;
                }
                else{
                    x[i] = temp[count_back];
                    count_back++;
                }
            }
            for(int i = 0 ; i < n ; i ++){
                temp[i] = x[i];
            }
        }
    }

    for(int i = 0 ; i< n ; i ++){
         cout << x[i] << " ";
    }

    return 0;
}