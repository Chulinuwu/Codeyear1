#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dek1, dek2;
    double gpax1, gpax2;
    string grade1, grade2;
    string cal1_1, cal1_2;
    string cal2_1, cal2_2;

    cin >> dek1 >> gpax1 >> grade1 >> cal1_1 >> cal2_1;
    cin >> dek2 >> gpax2 >> grade2 >> cal1_2 >> cal2_2;

    int pass1 = 0, pass2 = 0;
    // เกณฑ์การผ่านคนที่ 1
    if (grade1 == "A" && (cal1_1 == "A" || cal1_1 == "B" || cal1_1 == "C") && (cal2_1 == "A" || cal2_1 == "B" || cal2_1 == "C"))
        pass1 = 1;

    // เกณฑ์การผ่านคนที่ 2
    if (grade2 == "A" && (cal1_2 == "A" || cal1_2 == "B" || cal1_2 == "C") && (cal2_2 == "A" || cal2_2 == "B" || cal2_2 == "C"))
        pass2 = 1;

    // check
    if (pass1 == 0 && pass2 == 0) // ไม่ผ่าน
        cout << "None";

    else if (pass1 == 1 && pass2 == 0)
        cout << dek1;

    else if (pass1 == 0 && pass2 == 1)
        cout << dek2;

    else
    { // ผ่านทั้งคู่
        if (gpax1 < gpax2)
            cout << dek1;
        else if (gpax2 < gpax1)
            cout << dek2;
        else
        {
            if (cal1_1 < cal1_2)
                cout << dek1;
            else if (cal1_2 < cal1_1)
                cout << dek2;
            else
            {
                if (cal2_1 < cal2_2)
                    cout << dek1;
                else if (cal2_2 < cal2_1)
                    cout << dek2;
                else
                {
                    cout << "Both";
                }
            }
        }
    }
    return 0;
}