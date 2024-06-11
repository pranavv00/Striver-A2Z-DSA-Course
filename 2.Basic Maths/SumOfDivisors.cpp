#include <iostream>

long sumOfDivisors(int N) {
    long sum = 0;
    for (int i = 1; i <= N; i++) {
        int temp = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                temp += j;
            }
        }
        sum += temp;
    }
    return sum;
}

int main() {
    int n = 4;
    std::cout << sumOfDivisors(n) << std::endl;
    return 0;
}
