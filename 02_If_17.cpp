#include <iostream>
using namespace std;
int main(){
    int d,m,y;
    cin >> d;
    cin >> m;
    cin >> y;
    if((y-543)%4 != 0 || ((y-543)%100 == 0 && (y-543)%1000 != 0)){
        if(m==1){
            cout << d;
        } else if (m==2){
            cout << 31+d;
        } else if (m==3){
            cout << 59+d;
        } else if (m==4){
            cout << 90+d;
        } else if (m==5){
            cout << 120+d;
        } else if (m==6){
            cout << 151+d;
        } else if (m==7){
            cout << 181+d;
        } else if (m==8){
            cout << 212+d;
        } else if (m==9){
            cout << 243+d;
        } else if (m==10){
            cout << 273+d;
        } else if (m==11){
            cout << 304+d;
        } else if (m==12){
            cout << 334+d;
        }
    } else{
        if(m==1){
            cout << d;
        } else if (m==2){
            cout << 31+d;
        } else if (m==3){
            cout << 60+d;
        } else if (m==4){
            cout << 91+d;
        } else if (m==5){
            cout << 121+d;
        } else if (m==6){
            cout << 152+d;
        } else if (m==7){
            cout << 182+d;
        } else if (m==8){
            cout << 213+d;
        } else if (m==9){
            cout << 244+d;
        } else if (m==10){
            cout << 274+d;
        } else if (m==11){
            cout << 305+d;
        } else if (m==12){
            cout << 335+d;
        }
    }
}