#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main(){

    string front = "xx"; // 0
    string mid = "xxx"; // 3
    string end = "xxxx"; // 3
    
    cin >> front >> mid >> end;

    string x = front + mid + end; // 0 3 3
    string y = front + mid; // 0 3

    int mid_length = mid.length(); // 1
    int end_length = end.length(); // 1

    int xpow = pow(10, mid_length);
    int ypow = pow(10, end_length + mid_length);

    int top = stoi(x) - stoi(y);
    int down = ypow-xpow;

    cout << top / gcd(top , down) << " / " << down / gcd(top,down);

    return 0;
}
/*
7 0 0
7 / 1

1 5 0

123 456 789 
*/

 // cout << "length xten : " << sizeas <<  " ::: " << setprecision(50) << ninex << endl;
    // cout << ceil(ninex) /hrm << " / " << 9 / hrm ;