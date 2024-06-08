#include <iostream>

int reverse(int x) {
    int ans = 0;
    while (x != 0)
    {
        int tail = x % 10;
        int newResult = ans * 10 + tail;
        if ((newResult - tail) / 10 != ans){
            return 0;
        }
        ans = newResult;
        x = x / 10;
    }
    return ans;
} 

int main() {
    int n = 123;
    std::cout << reverse(n) << std::endl;
}
