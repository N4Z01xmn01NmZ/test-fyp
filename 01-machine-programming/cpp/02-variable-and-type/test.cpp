#include <stdio.h>

#define PRINT_DATA_I(x)\
printf(#x " value is %d with size of %d %s\n", x, sizeof(x), (sizeof(x) > 1) ? "bytes" : "byte"); \
printBytes(x); \
printf("\n")

#define PRINT_DATA_F(x)\
printf(#x " value is %2.3f %+.0e with size of %d %s\n", x, x, sizeof(x), (sizeof(x) > 1) ? "bytes" : "byte"); \
printBytesf(x); \
printf("\n")

template <typename T>
void printBytes(T& var) {
    void* ptr = &var;
    size_t n = sizeof(var);
    for (size_t i = 0; i < n; i++)
    {
        printf("%02X ", ((char*)ptr)[i]);
    }
}

template <typename T>
void printBytesf(T& var) {
    void* ptr = &var;
    size_t n = sizeof(var);
    printf("%a ", ((T*)ptr));
}

int main() {
    bool boo = true; // Stores true or false
    PRINT_DATA_I(boo);
    char cha = 'A'; // Stores a single byte
    PRINT_DATA_I(cha);
    int num = 45; // Stores 4 bytes interger value
    PRINT_DATA_I(num);
    float flo = 3.14f; // Stores a floating point value
    PRINT_DATA_F(flo);
    double dou = 3.14f; // Stores a floating point value
    PRINT_DATA_F(flo);
}