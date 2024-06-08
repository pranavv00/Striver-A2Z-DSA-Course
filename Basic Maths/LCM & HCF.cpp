#include <iostream>
#include <vector>
#include <algorithm>

std::vector<long long> lcmAndHcf(long long A, long long B) {
    std::vector<long long> ans(2);
    findLcm(A, B, ans);
    findHcf(A, B, ans);
    return ans;
}

void findHcf(long long a, long long b, std::vector<long long>& ans) {
    if (a % b == 0) {
        ans[1] = a;
        return;
    }
    long long c = a % b;
    findHcf(c, a, ans);
}

void findLcm(long long a, long long b, std::vector<long long>& ans) {
    long long max = std::max(a, b);
    long long min = std::min(a, b);
    long long tempMax = max;
    int temp = 1;
    for (int i = 0; i < 3; i++) {
        if (tempMax % min == 0) {
            ans[0] = tempMax;
        }
        else {
            temp++;
            tempMax = max * temp;
            i = -1;
        }
    }
}

int main() {
    long long a = 5;
    long long b = 10;
    std::vector<long long> ans = lcmAndHcf(a, b);
    std::cout << "[" << ans[0] << ", " << ans[1] << "]" << std::endl;
    return 0;
}

