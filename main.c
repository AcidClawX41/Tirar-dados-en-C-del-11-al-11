//Tirar dados con C by Eric V.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero;
    char opcion;

    srand(time(NULL));

    printf("Bienvenido al programa de tirar dados aleatorios del 1 al 11 de Eric V\n");

    while (1) {
        printf("Presione la tecla 't' para tirar el dado: ");
        scanf("%c", &opcion);
        getchar();  // Limpiar el buffer de entrada

        if (opcion == 't') {
            numero = rand() % 11 + 1;
            printf("El resultado es: %d\n", numero);
        }

        if (opcion =='q') {
            break;
        }
    }

    return 0;
}
