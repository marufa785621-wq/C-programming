#include <stdio.h>
int main() {
    int i = 1, fact = 1;
    while(i <= 6) {
        fact = fact * i;
        i++;
    }
    printf("Factorial of 6 is %d", fact); 
    return 0;
}
