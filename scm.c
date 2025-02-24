#include <stdio.h>
#include <time.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void multiplica(int a, int b) {
    printf("%d x %d = %d\n", a, b, a * b);
}

int main() {
    time_t local; //"local" is a variable of "time_t" data type.
    time(&local);
    
    printf("Olá, Estudante!\nA data e hora locais são: %s", ctime(&local));
    soma(5, 3);
    multiplica(5, 3);
    return 0;
}