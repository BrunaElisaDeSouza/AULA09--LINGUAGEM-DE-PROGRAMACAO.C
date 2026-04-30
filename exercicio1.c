#include <stdio.h>

int main() {
    int dia[7];
    int contagemChuva = 0;
    float porcentagem;

    printf("Registro de Chuva da Última Semana\n");
    printf("Digite 1 para dia com chuva e 0 para dia sem chuva:\n\n");

   
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &dia[i]);

       
        if (dia[i] == 1) {
            contagemChuva++;
        }
    }

    
    porcentagem = (contagemChuva * 100.0) / 7;

    printf("\n--- Resultado ---\n");
    printf("Total de dias chuvosos: %d\n", contagemChuva);
    printf("Porcentagem de dias que choveu: %.2f%%\n", porcentagem);

    return 0;
}