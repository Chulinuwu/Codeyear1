#include <iostream>
#include <string>
using namespace std;

int main()
{
    // สร้างตัวเเปร
    string w, s; // word // sentence
    string c = ""; // check
    int count = 0; // empty string
    getline(cin, w);
    getline(cin, s);
    s += " ";
    for (int i = 0; i <= s.length(); i++)
    {
        c += s[i];
        if (s[i] == ' ' || s[i] == '\"' || s[i] == '\'' || s[i] == '(' || s[i] == ')' || s[i] == ',' || s[i] == '.' || s[i] == '/')
        {
            if (c == w + " " || c == w + "\"" || c == w + "\'" || c == w + "(" || c == w + ")" || c == w + "," || c == w + "." || c == w + "/")
            {
                cout << w << " ";
                count += 1;
            }
            c = "";
        }

    }
    cout << count;


}
// int main()
// {
//     string find, Sentence, check = "";
//     int count = 0;
//     getline(cin, find);
//     getline(cin, Sentence);
//     Sentence = Sentence + " ";
//     for (int i = 0; i <= Sentence.length(); i++)
//     {
//         check = check + Sentence[i];
//         if (Sentence[i] == ' ' || Sentence[i] == '\"' || Sentence[i] == '\'' || Sentence[i] == '(' || Sentence[i] == ')' || Sentence[i] == ',' || Sentence[i] == '.' || Sentence[i] == '/')
//         {
//             if (check == find + " " || check == find + "\"" || check == find + "\'" || check == find + "(" || check == find + ")" || check == find + "," || check == find + "." || check == find + "/")
//             {
//                 count = count + 1;
//             }
//             check = "";
//         }
//     }
//     cout << count;
// }