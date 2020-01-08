#include <stdio.h>

int main() {
    float euro;
    float dolar;
    float cad;
    int menu;

    printf("1- Euro-USD Dollar \n2- USD Dollar-Euro \n3- Euro-CAD \n4- CAD-Euro \n");
    scanf("%d",&menu);

    if(menu == 1){
        printf("Euro:\n");
        scanf("%f", &euro);
        dolar = euro*1.11;
        printf("%f euros é:%f\n", euro, dolar);
    }else if(menu == 2){
        printf("Dollar:\n");
        scanf("%f", &dolar);
        euro = dolar/1.11;
        printf("%f dollares é:%f\n", dolar, euro);
    }else if(menu == 3){
        printf("Euro:\n");
        scanf("%f", &euro);
        cad = euro*1.45;
        printf("%f euros é:%f\n", euro, cad);
    }else if(menu == 4){
        printf("CAD:\n");
        scanf("%f", &cad);
        euro = cad/1.45;
        printf("%f cads é:%f\n", cad, euro);
    }else if(menu >= 5){
        printf("Opção inválida, Obrigado!\n");
    }
}
