#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin >> n; // รับจำนวนคอลัมน์

    int x[n]; // ความสูงของคอลัมน์
    int temp[n]; // ไว้เรียง input จากมากไปน้อย
    int backup[n];
    for(int i = 0 ; i < n ; i++){
        cin >> x[i];
        temp[i] = x[i]; // dump ลง temp รอเรียงต่อ
        backup[i] = x[i];
    }

    sort(temp,temp+n,greater<int>()); // sort temp จาก มากไปน้อย
    // for(int i = 0 ; i < n ; i++){
    //     cout << temp[i] << " ";
    // }
    int sum = 0;

    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < temp[0] ; j++){
            if(x[i] > x[i+1]){
                sum++;
                x[i]--;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        x[i] = backup[i];
    }

    cout << sum << endl;
    cout << x[n-2] << endl;
    for(int i = n-1 ; i > 0 ; i--){
        // for(int j = 0 ; j < temp[0] ; j++){
            if(x[i] < x[i-2] && x[i] > x[i-1]){
                sum = sum-(x[i-1]-x[i]);
            }
        // }
    }

    cout << sum;


    return 0;
}

/*
10
1 2 3 4 5 6 7 8 9 10
0

3
5 1 5
4

5
1 10 1 5 1
4
*/