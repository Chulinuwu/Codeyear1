#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    cin.ignore();
    string country[n];
    int tax[n];
    for(int i = 0 ; i < n ; i++){
        getline(cin,country[i]);
        tax[i] = stoi(country[i].substr(3));
    }

    // cout << tax[0];
    int x = 0;
    string flight[10000];

    while(cin >> flight[x]){
    x++;
    }

    // cout << country[0].substr(0,2) << endl;
    // cout << flight[3].substr(4) << endl;
    int sum = 0;

    for(int i = 0 ; i < x ; i++){
        if(i != x-1){
        if(flight[i].substr(4) == flight[i+1].substr(4)){
            // cout << "same" << endl;
            sum += 0;
        }
        else{
            for(int j = 0 ; j < n ; j++){
                if(country[j].substr(0,2) == flight[i+1].substr(4)){
                    sum += tax[j];
                }
                // cout << country[j].substr(0,2) << endl;
                // cout << flight[i+1].substr(4) << endl;
                // cout << sum << endl;
                // cout << "--------" << endl;
            }
        }
        }
    }

           cout << sum << endl;
    return 0;
}


/*
4
TH 300
FR 2500
UK 2800
JP 3500
NRT-JP LHR-UK DMK-TH CNX-TH BKK-TH PAR-FR BKK-TH
5900
*/
