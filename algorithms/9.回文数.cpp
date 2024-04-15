#include <iostream>
#include <string>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    int reversedNumber = 0;
    while (x > reversedNumber) {
        reversedNumber = reversedNumber * 10 + x % 10;
        x /= 10;
    }
    return x == reversedNumber || x == reversedNumber / 10;
}

int main() {
    int x;
    std::cin >> x;
    if (isPalindrome(x)) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}