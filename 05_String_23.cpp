#include <bits/stdc++.h>

using namespace std;

int main(){

    string num[] = {"0","1","2","3","4","5","6","7","8","9"};

    string eng[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

    string x;

    cin >> x;

    string temp = x.substr(0,3) + x.substr(4,6);

    int tempindex[] = {0,0,0,0,0,0};

    for(int i = 0 ; i < 10; i++){ //ตัวแรก
        if(temp.substr(0,1) == num[i]){
            tempindex[0]= i;
        }
        if(temp.substr(3,1) == num[i]){
            tempindex[3]= i;
        }
        if(temp.substr(4,1) == num[i]){
            tempindex[4]= i;
        }
        if(temp.substr(5,1) == num[i]){
            tempindex[5]= i;
        }
    }

    for(int i = 0 ; i < 26 ; i++){
        if(temp.substr(1,1) == eng[i]){
            tempindex[1]= i;
        }
        if(temp.substr(2,1) == eng[i]){
            tempindex[2]= i;
        }
    }

    
    int add;
    cin >> add;

    for(int i = 5 ; i > 2 ; i--){
    if(add + tempindex[i] > 9){
        tempindex[i] += add;
        add = tempindex[i]/10;
        tempindex[i] = tempindex[i]%10;
    }
    else{
        tempindex[i] += add;
        add = 0;
    }
    }

    for(int i = 2 ; i > 0 ; i--){
    if(add + tempindex[i] >= 26){
        tempindex[i] += add;
        add = tempindex[i]/26;
        tempindex[i] = tempindex[i]%26;
    }
    else{
        tempindex[i] += add;
        add = 0;
    }
    }

    if(add + tempindex[0] > 9){
        tempindex[0] += add;
        add = tempindex[0]/10;
        tempindex[0] = tempindex[0]%10;
    }
    else{
        tempindex[0] += add;
        add = 0;
    }

    // cout << add << endl;
    cout <<tempindex[0] << eng[tempindex[1]] << eng[tempindex[2]]  << "-"<< tempindex[3] << tempindex[4] << tempindex[5] << endl;
    
    // cout << temp;


    return 0;
}