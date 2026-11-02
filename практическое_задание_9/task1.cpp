#include <cctype>
#include <fstream>
#include <string>

int main() {
    std::ifstream in("input.txt");
    std::ofstream out("output.txt");

    std::string removed = "useragmnt";
    char c;

    while (in.get(c)) {
        char lower = std::tolower(c);

        bool shouldRemove = false;

        for (int i = 0; i < removed.size(); i++) {
            if (lower == removed[i]) {
                shouldRemove = true;
                break;
            }
        }

        if (!shouldRemove) {
            out << c;
        }
    }
}