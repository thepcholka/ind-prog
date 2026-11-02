#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

// Перевод десятичного числа в двоичное
string toBinary(string number) {
    if (number == "0") {
        return "0";
    }

    string binary = "";

    while (number != "0") {
        string divided = "";
        int remainder = 0;

        for (int i = 0; i < number.size(); i++) {
            int digit = number[i] - '0';

            int current = remainder * 10 + digit;

            int quotientDigit = current / 2;
            remainder = current % 2;

            if (divided != "" || quotientDigit != 0) {
                divided += char(quotientDigit + '0');
            }
        }

        binary += char(remainder + '0');

        if (divided == "") {
            number = "0";
        } else {
            number = divided;
        }
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string line;
    getline(in, line);

    int i = 0;

    while (i < line.size()) {

        if (line[i] >= '0' && line[i] <= '9') {
            string number = "";

            while (i < line.size() &&
                   line[i] >= '0' && line[i] <= '9') {
                number += line[i];
                i++;
            }

            out << toBinary(number);
        }
        else {
            out << line[i];
            i++;
        }
    }

    return 0;
}