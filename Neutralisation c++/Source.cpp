#include <iostream>
#include <string>

std::string neutralise(const std::string& s1, const std::string& s2) {
    std::string result;
    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] == '+' && s2[i] == '+') {
            result += '+';
        }
        else if (s1[i] == '-' && s2[i] == '-') {
            result += '-';
        }
        else {
            result += '0';
        }
    }
    return result;
}

int main() {
    // Example usage
    std::cout << neutralise("+-+", "+--") << " ➞ " << "+-0" << std::endl;
    std::cout << neutralise("--++--", "++--++") << " ➞ " << "000000" << std::endl;
    std::cout << neutralise("-+-+-+", "-+-+-+") << " ➞ " << "-+-+-+" << std::endl;
    std::cout << neutralise("-++-", "-+-+") << " ➞ " << "-+00" << std::endl;

    return 0;
}
