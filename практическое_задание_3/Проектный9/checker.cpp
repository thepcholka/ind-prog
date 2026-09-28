#include "checker.h"

int check(int n, int m) {
    return 1 - (n % m) * (m % n);
}