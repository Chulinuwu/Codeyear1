#include <bits/stdc++.h>

using namespace std;

int main()
{
    tuple<string , int , int> t1 = make_tuple("ABC", 12, 25);
    tuple<string , int , int> t2 = make_tuple("B", 8, 12);
    tuple<string , int , int> t3 = make_tuple("B", 8, 99);

    cout <<(t1<t2) << endl;
    return 0;
}