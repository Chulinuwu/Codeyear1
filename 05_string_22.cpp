#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    string y;
    cin>>x>>y;

    string tempx[10000];
    string tempy[10000];
    tempx[0] = x;
    tempy[0] = y;

    string tempyofx[10000];
    string tempxofy[10000];
    tempyofx[0] = y;
    tempxofy[0] = x;

    for(int i=1;i<=y.length();i++) //สร้าง string ใหม่ที่มี "-"
    {
            tempx[i] = "-" + tempx[i-1];
            tempxofy[i] = tempxofy[i-1] + "-";
            // cout << tempx[i] << endl;
    }


    for(int i = 1; i <= x.length() ; i++){ //สร้าง string ใหม่ที่มี "-"
        tempy[i] = "-" + tempy[i-1];
        tempyofx[i] = tempyofx[i-1] + "-";
        // cout << tempyofx[i] << endl;
    }

    int count_y[10000]; // นับตอนช่องล่างเลื่อน
    int count_x[10000]; // นับตอนช่องบนเลื่อน

    // cout << min(tempx[0].length(),tempyofx[0].length()) << endl;
    for(int i = 0 ; i < tempy[x.length()].length() ; i++){ // เลื่อนล่าง
        count_y[i] = 0;
        for(int j = 0 ; j < min(tempy[i].length(),tempxofy[i].length()) ; j++){
            if(tempy[i].substr(j,1) == tempxofy[i].substr(j,1)){
                count_y[i]++;
            }
        }
        // cout << count_y[i] << "  " ;
    }

    // cout << endl;
    for(int i = 0 ; i < tempx[y.length()].length() ; i++){ // เลื่อนบน
        count_x[i] = 0;
        for(int j = 0 ; j < min(tempx[i].length(),tempyofx[i].length()) ; j++){
            if(tempx[i].substr(j,1) == tempyofx[i].substr(j,1)){
                count_x[i]++;
            }
        }
        // cout << count_x[i] << "  ";
    }

    int maxindex_x = 0;
    int maxindex_y = 0;
    int max_x = count_x[0];
    int max_y = count_y[0];

    for(int i = 0 ; i < tempx[y.length()].length() ; i++){ // หาค่ามากสุดของการเลื่อนบรรทัดบน
        if(count_x[i] > max_x){
            max_x = count_x[i];
            maxindex_x = i;
        }
    }

    for(int i = 0 ; i < tempy[x.length()].length() ; i++){ // หาค่ามากสุดของการเลื่อนบรรทัดล่าง
        if(count_y[i] > max_y){
            max_y = count_y[i];
            maxindex_y = i;
        }
    }

    // cout << "max_x : " << max_x << " maxindex_x : " << maxindex_x << endl;
    // cout << "max_y : " << max_y << " maxindex_y : " << maxindex_y << endl;

    if(max_x > max_y){
        cout << tempx[maxindex_x] << endl;
        cout << y << endl;
        cout << max_x << endl;
    }
    else{
        cout << x << endl;
        cout << tempy[maxindex_y] << endl;
        cout << max_y << endl;
    }

    return 0;
}