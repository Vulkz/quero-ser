#include <stdio.h>
#include <string.h>

int valores(int n1, int n2) {
    int menor;

    if (n1 - n2 < 0) {
        menor = (n1 - n2) * -1;
    } else {
        menor = n1 - n2;
    }
    return menor;
}

void distancia(int num1[10], int num2[10]) {
    int n1, n2, menor;

    for (int c = 0; c < 10; c++) {

        for (int i = 0; i < 10; i++) {

            if ((c == 0 && i == 0)) {
                menor = valores(num1[c], num2[i]);

                n2 = num2[i];
                n1 = num1[c];
            } else if (valores(num1[c], num2[i]) < menor) {

                menor = valores(num1[c], num2[i]);
                n2 = num2[i];
                n1 = num1[c];
            }
        }
    }
    printf("A menor distância seria a combinação do número %d do array 1 com o número %d do array 2, que seria %d de distância.",n1, n2, menor);
}

int main() {
    int num2[10] = {-1, 5, -10, 7, 4, 5, 1, 9, 35, 3};
    int num1[10] = {26, 6, 5, 10, 2, 0, 30, 40, -2, 10};

    distancia(num1, num2);
}