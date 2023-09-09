#include <bits/stdc++.h>

using namespace std;

string addBigNumbers(string num1, string num2) {
    int len1 = num1.length();
    int len2 = num2.length();

    int carry = 0;
    string result;

    int i = len1 - 1, j = len2 - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;

        result = to_string(sum) + result;

        i--;
        j--;
    }

    return result;
}

int main() {
    string bigNum1;
    string resultAdd = "0";
    while(true){
    cin >> bigNum1;
    if(bigNum1 == "END"){
        cout << resultAdd << endl;
        return 0;
    }
    resultAdd = addBigNumbers(bigNum1,resultAdd);
    // cout << resultAdd;

    }
    return 0;
}
