#include <iostream>
#include <cmath>
#include <string>

std::string armstrongNumber(int n) {
    int preN = n;
    int sum = 0;
    while (n > 0) {
        sum += std::pow(n % 10, 3);
        n /= 10;
    }
    if (sum == preN) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int n = 153;
    std::cout << armstrongNumber(n) << std::endl;
    return 0;
}

