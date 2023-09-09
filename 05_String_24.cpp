#include <bits/stdc++.h>

using namespace std;

int main()
{

    string x;

    getline(cin, x);

    string tempfirst;
    string extractfirst;
    string extractlast;
    string mid;
    int indexfirst = 0;
    int lengthfirst = 0;
    string templast;
    int indexlast = 0;
    int lengthlast = 0;

    for (int i = 0; i < x.length(); i++)
    {   
        if (x.substr(i, 1) == "a" || x.substr(i, 1) == "e" || x.substr(i, 1) == "i" || x.substr(i, 1) == "o" || x.substr(i, 1) == "u")
        {   
            indexfirst = i;
            for (int j = i; j < x.length(); j++)
            {
                if (x.substr(j, 1) != " ")
                {
                    tempfirst = tempfirst + x.substr(j, 1);
                }
                else
                {
                    lengthfirst = j-i;
                    break;
                }
            }
            break;
        }
        else{
            extractfirst = extractfirst + x.substr(i,1);
        }
    }

    int k_save = 0;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        if (x.substr(i, 1) == " ")
        {
            for (int j = i; j < x.length(); j++)
            {
                if (x.substr(j, 1) == "a" || x.substr(j, 1) == "e" || x.substr(j, 1) == "i" || x.substr(j, 1) == "o" || x.substr(j, 1) == "u")
                {
                    indexlast = j;
                    for (int k = j; k < x.length(); k++)
                    {
                            templast = templast + x.substr(k, 1);
                            if(k == x.length()-1){
                                k_save = k;
                            }
                    }
                    lengthlast = k_save-j+1;
                    break;
                }
                else{
                    // cout << x.substr(j, 1) << " ";
                    if(x.substr(j, 1) != " "){
                    extractlast = extractlast + x.substr(j,1);
                    }
                }
            }
            break;
        }
    }

    int backspacecount = 0;
    int checker = 0;
    for(int i = 0 ; i < x.length(); i++){
        if(x.substr(i,1) == " "){
            backspacecount++;
        }
    }

    for(int i = 0 ; i < x.length(); i++){

            if(x.substr(i,1) == " "){
                checker++;
                continue;
            }
            if(checker < backspacecount && checker >= 1){
                for(int j = i ; j <x.length() ; j++){
                    if(x.substr(j,1) == " "){
                        checker++;
                    }
                    if(checker == backspacecount){
                        break;
                    }
                   mid = mid + x.substr(j,1); 
                }
                break;
            }
    }
    cout << extractfirst << templast << " " << mid << " " << extractlast << tempfirst << endl;
    return 0;
}