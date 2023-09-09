#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
 for(int i =0 ; i < line.length() ; i++) {
    if(delimiter != line.substr(i,1)){
        split.push_back(line.substr(i,1),NULL);
    }

 }
}
int main() {
 string line;
 getline(cin, line);
 string delim;
 getline(cin, delim);
 for (string e : split(line, delim[0])) {
 cout << '(' << e << ')';
 }
}