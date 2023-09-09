
#include <iostream>
#include <math.h>
#include <string.h>
#include <map>
#include <vector>
using namespace std;

const int MaxN = 10e8;
string num;

int main(){

    cin.tie(NULL) -> sync_with_stdio(false);

    cin >> num;

    int ch = 13;
    int sum = 0;
    for(int i = 0; i < 12; i++){
        sum += (ch - i) * ((int)num[i] - 48);
    }

    sum = (11 - (sum % 11)) % 10;

    cout << num[0] << "-";

    for(int i = 1; i <= 4; i++){
        cout << num[i];
    }

    cout << "-";

    for(int i = 5; i <= 9; i++){
        cout << num[i];
    }

    cout << "-" << num[10] << num[11] << "-" << sum;

    return 0;
}