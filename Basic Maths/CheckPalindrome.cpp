#include <iostream>
#include <string>

bool isPalindrome(int x) {
    // Solution 2: Time complexity: O(NlongN) (Optimized)
    // Storing X value in other Index so that we can't lose initial value of X
    int preX = x;
    if (x < 0 || (x != 0 && x % 10 == 0)) {
        return false;
    }
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    return (preX == rev || preX == rev / 10);
}

int main() {
    int x = 121;
    std::cout << std::boolalpha << isPalindrome(x) << std::endl;
    return 0;
}

