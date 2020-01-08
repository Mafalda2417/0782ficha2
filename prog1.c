#include <stdio.h>

int main() {
    float kg;
    float lb;
    int opcao;

    printf("Qual a opção? \n");
    scanf("%d",&opcao);

    if(opcao == 1){
        printf("kg:\n");
        scanf("%f", &kg);
        lb = kg*2.2;
        printf("%f kg é:%f\n", kg, lb);
    }else if(opcao == 2){
        printf("lb:\n");
        scanf("%f",&lb);
        kg = lb/2.2;
        printf("%f lb é: %f", lb, kg);
    }
}