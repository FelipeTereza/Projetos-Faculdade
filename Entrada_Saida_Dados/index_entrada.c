#include <stdio.h>

int main(){
    int age;
    float height;
    char letter;
    char name[20];

    // sintaxe scanf
    //scanf("Formato1", "Formato2, &variavel1, variavel2 ...");

    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("Your Age is: %d\n", age);

    printf("Enter your Height: ");
    scanf("%f", &height);
    printf("Your Height is: %.2f\n", height);

    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Your Name is: %s\n", name);

    printf("Enter your Letter: ");
    scanf(" %c", &letter); // O espaço antes do %c é para consumir o caractere de nova linha deixado pelo scanf anterior
    printf("Your First Letter is: %c\n", letter);
  

    /*

        printf("%Formato1, %Formato2, Formato3", variavel1, variavel2, Variavel3);
    
        %d: Imprime um inteiro no formato decimal.
    
        %i: Equivalente a %d.
    
        %f: Imprime um número de ponto flutuante no formato padrão.
    
        %e: Imprime um número de ponto flutuante na notação científica.
    
        %c: Imprime um único caractere.
    
        %s: Imprime uma cadeia (string) de caracteres.


    */
   return 0;
}