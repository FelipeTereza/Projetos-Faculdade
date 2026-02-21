#include <stdio.h>

int main(){
    int age = 22;
    float height = 1.81;
    char letter = 'F';
    char name[20] = "Felipe Tereza";

    printf("Your Name is: %s\n", name);
    printf("Your Age is: %d\n", age);
    printf("Your Height is: %.2f\n", height);
    printf("Your First Letter is: %c\n", letter);

    /*
    
        %d: Imprime um inteiro no formato decimal.
    
        %i: Equivalente a %d.
    
        %f: Imprime um número de ponto flutuante no formato padrão.
    
        %e: Imprime um número de ponto flutuante na notação científica.
    
        %c: Imprime um único caractere.
    
        %s: Imprime uma cadeia (string) de caracteres.

    */
   return 0;
}