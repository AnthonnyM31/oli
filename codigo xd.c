#include <stdio.h>

int variable();
int unwhile(int n1, int n2); // Prototipo de función

int main() {

    char repetir;

    do {
        fflush(stdin);
        int variable1 = variable();
        int variable2 = variable();
        int contador = unwhile(variable1, variable2);

        printf("¿Quieres elegir otros valores? Presiona S si es si, o cualquier otra tecla si es no.\n");
        scanf(" %c", &repetir);

    } while (repetir == 'S' || repetir == 's');

    return 0;
}

int variable() {
    int variable;
    printf("Dime un numero: ");
    scanf("%i", &variable);
    return variable;
}

int unwhile(int n1, int n2) {
    int contador = n1;
    if (contador <= n2) {
        printf("Los numeros entre el primer y segundo numero son:\n");
        while (contador <= n2) {
            printf("%i\n", contador);
            contador++;
        }
    } else {
        printf("Los numeros menores que el primero hasta el segundo son:\n");
        while (contador >= n2) {
            printf("%i\n", contador);
            contador--;
        }
    }
    return contador;
}
