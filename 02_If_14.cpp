#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    string nisit1;
    string nisit2;
    int result_nisit1 = 0 ;
    int result_nisit2 = 0 ;
    double gpx1; 
    double gpx2;
    char comprog1[10]; 
    char comprog2[10];
    char cal1_1[10];
    char cal1_2[10];
    char cal2_1[10];
    char cal2_2[10];

    cin >> nisit1 >>  gpx1 >> comprog1 >> cal1_1 >> cal2_1; //7034 2.8 B C C
    cin >> nisit2 >>  gpx2 >> comprog2 >> cal1_2 >> cal2_2; //7030 3.5 B A A

    if(comprog1[0] == 'A' && (cal1_1[0] == 'A' || cal1_1[0] == 'B'|| cal1_1[0]== 'C') && (cal2_1[0] == 'A' || cal2_1[0] == 'B'|| cal2_1[0]== 'C')){
        result_nisit1 = 1;
    }
    if(comprog2[0] == 'A' && (cal1_2[0] == 'A' || cal1_2[0] == 'B'|| cal1_2[0]== 'C') && (cal2_2[0] == 'A' || cal2_2[0] == 'B'|| cal2_2[0]== 'C')){
        result_nisit2 = 1;
    }

    if(result_nisit1 == 1 && result_nisit2 == 1){
        if(gpx1 > gpx2){
            result_nisit1 = 1;
            result_nisit2 = 0;
        }
        else if(gpx2 > gpx1){
            result_nisit2 = 1;
            result_nisit1 = 0;
        }
        else if(gpx2 == gpx1){
            if((int)cal1_1[0] < (int)cal1_2[0]){
                result_nisit1 = 1;
                result_nisit2 = 0;
            }
            else if((int)cal1_1[0] > (int)cal1_2[0]){
                result_nisit2 = 1;
                result_nisit1 = 0;
            }
            else{
               if((int)cal1_1[0] < (int)cal1_2[0]){
                result_nisit1 = 1;
                result_nisit2 = 0;
            }
            else if((int)cal2_1[0] > (int)cal2_2[0]){
                result_nisit2 = 1;
                result_nisit1 = 0;
            }
            else{
                result_nisit2 = 1;
                result_nisit1 = 1;
            } 
            }
        }
    }
    else if(result_nisit1 == 0 && result_nisit2 == 0){
          cout << "None";
          return 0;
            }


    if(result_nisit1 == 1 && result_nisit2 == 1){
        cout << "Both";
        return 0;
    }
    if(result_nisit1 == 1 && result_nisit2 == 0){
        cout << nisit1;
       return 0;
    }
    if(result_nisit1 == 0 && result_nisit2 == 1){
        cout << nisit2;
        return 0;
    }

    // cout << endl << (int)cal1_1[0];

    return 0;
}

/*
7039999921 3.1 A C B
7030000021 3.1 A C B

Both

7039999921 2.8 A C C
7030000021 3.5 B A A
7039999921

*/