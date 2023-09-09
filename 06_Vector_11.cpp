#include <bits/stdc++.h>

using namespace std;


int main(){


    vector<int> x;

    int n;
    int num;
    cin >> n;
    cin.ignore();
    int counter = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        cin.ignore();
        if(counter%2 ==0){
            x.push_back(num);
        }
        else{
            x.insert(x.begin(),num);
        }
        counter++;
    }

    string two;
    string temp;

    getline(cin,two);
    for(int i = 0 ; i < two.length(); i++){
        if(two.substr(i,1) != " "){
            temp = temp + two.substr(i,1);
        }
        if(i == two.length()-1){
            if(counter%2 == 0){
                x.push_back(stoi(temp));
            }
            else{
                x.insert(x.begin(),stoi(temp));
            }
            counter++;
            temp = " ";
        }
        if(two.substr(i,1) == " "){
            if(counter%2 == 0){
                x.push_back(stoi(temp));
            }
            else{
                x.insert(x.begin(),stoi(temp));
            }
            counter++;
            temp = " ";
        }
    }

    while(true){
        cin >> num;
        cin.ignore();
        if(num != -1){
            if(counter%2 == 0){
                x.push_back(num);
            }
            else{
                x.insert(x.begin(),num);
            }
        }
        else{
            cout << "[";
            int check = 0;
            for(auto e : x){
                if(check+1 != x.size()){
                cout << e << ", ";
                check++;
                }
                else{
                    cout << e;
                }
            }
            cout << "]";
            return 0;
        }
        counter++;
    }

    return 0;
}