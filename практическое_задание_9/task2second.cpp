#include <fstream>
#include <string>

int main() {
    std::ifstream input1("input1.txt");
    std::ifstream input2("input2.txt");
    std::ofstream out("output.txt");

    std::string x, y;
    std::getline(input1, x);
    std::getline(input2, y);

    bool found = false;

    for (int i = 0; i + y.size() <= x.size(); i++) {
        int j = 0;

        while (j < y.size() && x[i + j] == y[j]) {
            j++;
        }

        if (j == y.size()) {
            found = true;
            break;
        }
    }

    out << (found ? "yes" : "no");
}