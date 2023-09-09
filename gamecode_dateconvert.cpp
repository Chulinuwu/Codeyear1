#include <iostream>
#include <string>

int main() {
     string input = "asd";
    std::cin >> input;
    int input_month = ((input[3] - "0") * 10) + (input[4] - "0");
    static char m_months[13][10] = {"",     "JAN", "FEB", "MAR",         "API", "MAY", "JUN", "JUL",         "AUG", "SEP", "OCT",       "NOV", "DEC"};
    std::cout << std:: string month(m_months[input_month]);
    int input_year = ((input[6] - "0") * 1000) + ((input[7] - "0") * 100) + ((input[8] - "0") * 10) + (input[9] - "0")
    std::cout << " " << input[0] << input[1] << "," << " " << input_year - 543;
    return 0;
}