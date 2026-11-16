#include <stdio.h>
int main() {
    int i = 1, fact = 1;
    do {
        fact = fact * i;
        i++;
    } while(i <= 6);
    
    printf("Factorial of 6 is %d", fact); 
    return 0;
}
