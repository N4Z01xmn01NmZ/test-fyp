#include <iostream>

void isTrue(bool statement) {
    if (statement)
        std::cout << "statement is true\n";
    else
        std::cout << "statement is false\n";
}

int main() {
    isTrue(2 > 0);
    isTrue(6 <= 11);
    isTrue('x' == 'y');
    getchar();

    bool x = true, y = false;
    isTrue(x || y);
    isTrue(x && y);
    isTrue(!y);
    getchar();
}