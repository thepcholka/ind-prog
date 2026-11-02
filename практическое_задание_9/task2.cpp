#include <fstream>
#include <string>

int main() {
    std::ifstream input1("input1.txt");
    std::ifstream input2("input2.txt");
    std::ofstream out("output.txt");

    std::string x, y;
    std::getline(input1, x);
    std::getline(input2, y);

    if (x.find(y) != std::string::npos) {
    out << "yes";
    } else {
    out << "no";
    }
}   