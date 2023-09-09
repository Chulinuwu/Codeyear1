#include <iostream>
#include <string>
using namespace std;

int main(){
    string dmy;
    cin >> dmy;
    int x1 = dmy.find("/");
    int x2 = dmy.find("/", dmy.find("/")+1);
    
    string d = dmy.substr(0,x1);
    string m = dmy.substr(x1+1,2);
    string y = dmy.substr(x2+1);
    int a;
    a = stoi(y);

    if(m=="01"){
        m = "JAN";
    } else if (m=="02"){
        m = "FEB";
    } else if (m=="03"){
        m = "MAR";
    } else if (m=="04"){
        m = "APR";
    } else if (m=="05"){
        m = "MAY";
    } else if (m=="06"){
        m = "JUN";
    } else if (m=="07"){
        m = "JUL";
    } else if (m=="08"){
        m = "AUG";
    } else if (m=="09"){
        m = "SEP";
    } else if (m=="10"){
        m = "OCT";
    } else if (m=="11"){
        m = "NOV";
    } else if (m=="12"){
        m = "DEC";
    }

    cout << m << " " << d << ", " << a-543 << endl;
}