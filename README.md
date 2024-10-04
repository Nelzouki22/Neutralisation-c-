# Neutralisation
Neutralisation
Task Description
This task involves returning a new string based on the interaction of two strings composed of the symbols + and -. The interactions are processed according to the following rules:

When + interacts with +, the result remains +.
When - interacts with -, the result remains -.
When + interacts with -, the result becomes 0.
Examples
neutralise("+-+", "+--") ➞ "+-0"
neutralise("--++--", "++--++") ➞ "000000"
neutralise("-+-+-+", "-+-+-+") ➞ "-+-+-+"
neutralise("-++-", "-+-+") ➞ "-+00"
How to Use
You can use the neutralise function as follows:
#include <iostream>
#include <string>

std::string neutralise(const std::string& s1, const std::string& s2) {
    std::string result;
    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] == '+' && s2[i] == '+') {
            result += '+';
        } else if (s1[i] == '-' && s2[i] == '-') {
            result += '-';
        } else {
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
Notes
The two strings will be of the same length.
You can modify the function to suit your specific needs.
markdown
#include <iostream>
#include <string>

std::string neutralise(const std::string& s1, const std::string& s2) {
    std::string result;
    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] == '+' && s2[i] == '+') {
            result += '+';
        } else if (s1[i] == '-' && s2[i] == '-') {
            result += '-';
        } else {
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






## وصف المهمة
تقوم هذه المهمة بإرجاع سلسلة جديدة بناءً على تفاعل سلسلتين من الرموز `+` و `-`. تتم معالجة التفاعلات بين الرموز وفقًا للقواعد التالية:

1. عندما تتفاعل رموز `+` مع `+`، تبقى النتيجة `+`.
2. عندما تتفاعل رموز `-` مع `-`، تبقى النتيجة `-`.
3. عند تفاعل `+` مع `-`، تصبح النتيجة `0`.

## أمثلة
- `neutralise("+-+", "+--")` ➞ `"+-0"`
- `neutralise("--++--", "++--++")` ➞ `"000000"`
- `neutralise("-+-+-+", "-+-+-+")` ➞ `"-+-+-+"`
- `neutralise("-++-", "-+-+")` ➞ `"-+00"`

## كيفية الاستخدام
يمكنك استخدام الدالة `neutralise` كما يلي:

```cpp
#include <iostream>
#include <string>

std::string neutralise(const std::string& s1, const std::string& s2) {
    std::string result;
    for (size_t i = 0; i < s1.length(); ++i) {
        if (s1[i] == '+' && s2[i] == '+') {
            result += '+';
        } else if (s1[i] == '-' && s2[i] == '-') {
            result += '-';
        } else {
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
Notes
السلسلتان ستكونان بنفس الطول.
يمكنك تعديل الدالة لتناسب احتياجاتك الخاصة.


