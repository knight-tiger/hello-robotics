#include <stdio.h>
int main() {
    char s[] = "Hello, World!\n";
    int i = 0;
    while(s[i]) putchar(s[i++]);
    return 0;
}
