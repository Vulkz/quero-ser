#include <stdio.h>
#include <string.h>

int distancia(int num1[10], int num2[10]) {
    int n1, n2, menor;

    for(int c=0; c < 10; c++) {

        for (int i=0; i < 10; i++) {

            if((c == 0 && i == 0) || ((num1[c] - num2[i]) >= 0)) {

                if ((num1[c] - num2[i]) <= menor){

                    menor = (num1[c] - num2[i]);

                    n2 = num2[i];
                    n1 = num1[c];
                }
            }
        }
    }
    printf("num1 %d num2 %d\n", n1, n2);
}


void main() {
    int num2 [10] = {-1, 5, -10, 7, 4, 5, 1, 9, 35, 3};
    int num1 [10] = {26, 6, 5, 10, 2, 0, 30, 40, -2, 10};

    distancia(num1, num2);
}