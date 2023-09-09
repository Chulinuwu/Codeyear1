#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){

    double kg,cm;
    cin >> kg;
    cin >> cm;

    double mosteller = (sqrt(kg*cm)/60);
    double haycock = 0.024265 * pow(kg , 0.5378) * pow(cm , 0.3964);
    double boyd = 0.0333 * pow(kg , 0.6157-0.0188*log10(kg))*pow (cm , 0.30);

    cout << setprecision(15) << mosteller << endl;
    cout << setprecision(15) << haycock << endl;
    cout <<setprecision(15) << boyd << endl;
    
    return 0;
}
/*
56
173

1.64046063991524
1.63048681740224
1.6321557478024
*/