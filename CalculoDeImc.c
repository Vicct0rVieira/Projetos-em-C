#include <stdio.h>

int main(void) {
    
    float IMC, peso, altura;
  
    if (IMC >= 18.00 && IMC < 25.00) {
        printf("Peso Normal :)\n");
  
    } else if (IMC >= 25.00 && IMC < 30.00) {
        printf("Pré-Obesidade :|\n");
  
    } else if (IMC >= 30.00 && IMC < 35.00) {
        printf("Obesidade N1 :\\\n");
   
    } else if (IMC >= 35.00 && IMC < 40.00) {
        printf("Obesidade N2 :(\n");
    
    } else if (IMC >= 40.00) {
        printf("Obesidade N3 X(\n");
   
    } else {
        printf("Abaixo do Peso :(");

    }

    return 0;
}
