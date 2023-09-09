#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
    vector<string> z;
    string temp;
 for(int i = 0 ; i < line.size() ; i++){
    char ca = line[i];
    if(ca != delimiter){
        temp = temp + line.substr(i,1);
    }
    if(i == line.size()-1){
        if(temp!=""){
        z.push_back(temp);
        temp = "";
        }
    }
    if(ca == delimiter){
        if(temp != ""){
        z.push_back(temp);
        temp = "";
        }
    }

 }  
 return z;
}
int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) { // วนชุดข้อมูลที่เป็น string
 cout << '(' << e << ')';
 }
}