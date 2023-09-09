#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,t;
    int d1 , m1 , y1 , t1;
    int rem_t , rem_t1;
    cin >> d;
    cin >> m;
    cin >> y;
    cin >> d1;
    cin >> m1;
    cin >> y1;
    if((y-543)%4 != 0 || ((y-543)%100 == 0 && (y-543)%1000 != 0)){
        if(m==1){
            t = d ;
        } else if (m==2){
            t = 31+d;
        } else if (m==3){
            t = 59+d;
        } else if (m==4){
            t = 90+d;
        } else if (m==5){
            t =120+d;
        } else if (m==6){
            t = 151+d;
        } else if (m==7){
            t= 181+d;
        } else if (m==8){
            t = 212+d;
        } else if (m==9){
            t= 243+d;
        } else if (m==10){
            t = 273+d;
        } else if (m==11){
            t= 304+d;
        } else if (m==12){
            t= 334+d;
        }
        rem_t = 366-t;
    } else{
        if(m==1){
            t=d;
        } else if (m==2){
            t=31+d;
        } else if (m==3){
            t=60+d;
        } else if (m==4){
            t=91+d;
        } else if (m==5){
           t=121+d;
        } else if (m==6){
            t=152+d;
        } else if (m==7){
            t= 182+d;
        } else if (m==8){
            t= 213+d;
        } else if (m==9){
           t=244+d;
        } else if (m==10){
            t= 274+d;
        } else if (m==11){
           t= 305+d;
        } else if (m==12){
           t= 335+d;
        }
        rem_t = 367-t;
    }
    
    if((y1-543)%4 != 0 || ((y1-543)%100 == 0 && (y1-543)%1000 != 0)){
        if(m1==1){
            t1 = d1  ;
        } else if (m1==2){
            t1 = 31+d1;
        } else if (m1==3){
            t1 = 59+d1;
        } else if (m1==4){
            t1 =  90+d1;
        } else if (m1==5){
            t1 =120+d1;
        } else if (m1==6){
            t1 = 151+d1;
        } else if (m1==7){
            t1= 181+d1;
        } else if (m1==8){
            t1 =  212+d1;
        } else if (m1==9){
            t1=243+d1;
        } else if (m1==10){
            t1 =  273+d1;
        } else if (m1==11){
            t1= 304+d1;
        } else if (m1==12){
            t1= 334+d1;
        }
        rem_t1 = t1-1;
    } else{
        if(m1==1){
            t1=d1;
        } else if (m1==2){
            t1=d1-1;
        } else if (m1==3){
            t1=60+d1;
        } else if (m1==4){
            t1= 91+d1;
        } else if (m1==5){
           t1= 121+d1;
        } else if (m1==6){
            t1= 152+d1;
        } else if (m1==7){
            t1= 182+d1;
        } else if (m1==8){
            t1= 213+d1;
        } else if (m1==9){
           t1=244+d1;
        } else if (m1==10){
            t1= 274+d1;
        } else if (m1==11){
           t1= 305+d1;
        } else if (m1==12){
           t1= 335+d1;
        }
        rem_t1 = t1-1;
    }
    
    int y_calc = (y1-y-1)*365;
 
    int result = y_calc + rem_t + rem_t1;
    double twopiethree = 2*M_PI*result;
    double physical = sin(twopiethree/23);
    double emotional = sin(twopiethree/28);
    double intellectual = sin(twopiethree/33);
    // cout << m << endl;
    // cout << t << " : " << t1 << endl;
    // cout << rem_t << " : " << rem_t1 << endl;
    cout << result << " " << round(physical*100.0)/100.0 << " " << round(emotional*100.0)/100.0 << " " << round(intellectual*100.0)/100.0;

    return 0;
}

/*
20 11 2540
10 2 2544

1 1 2559 
1 1 2560

*/