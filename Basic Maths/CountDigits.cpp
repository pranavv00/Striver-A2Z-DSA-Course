#include <iostream>

int evenlyDivides(int N) {
    // Storing N value in other variable so that we can't lose initial value of N
    int preN = N;
    int count = 0;
    int digit = 0;
    while (N > 0) {
        digit = N % 10;
        // To resolve divide by zero exception
        if (digit != 0) {
            if (preN % digit == 0) {
                count++;
            }
        }
        N = N / 10;
    }
    return count;
}

int main() {
    int x = 22074;
    std::cout << evenlyDivides(x) << std::endl;
    return 0;
}

