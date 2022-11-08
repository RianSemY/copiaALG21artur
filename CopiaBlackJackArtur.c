#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
#include<time.h>

int mao(char son, int gm, int sort_naipe, char* naipe, int total){
    fflush(stdin);
    scanf("%c", &son);
    if(son=='s'){son='S';}
    if(son=='S'){ //MÂO 3
        printf("Mão 3\n");
        int gm, sort_naipe;
            char* naipe;
            gm=1+(rand() % 10);gm=1+(rand() % 10);
            sort_naipe =rand() % 4;sort_naipe=rand() % 4;
            if(sort_naipe==3)
                naipe="ouros";
            else if(sort_naipe==2)
                naipe="espadas";
            else if(sort_naipe==1)
                naipe="paus";
            else if(sort_naipe==0)
                naipe="copas";
            total+=gm;
            printf("\n            --Você retirou um %d de %s --\n", gm, naipe);
            if(gm==1){
                do{
                    printf("\n        \t      Você tem um Ás.\n\tQuanto você quer que valha o seu Ás de %s?\n\t\tInsira um valor válido: ", naipe);
                    scanf("%d", &gm);
                }while(gm!=1 && gm!=11);
                total+=gm-1;

                return 0;
            }
            printf("\n\t\t    Você somou %d", total);
    }
    return;

int main(){
    system("color b");
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    float aux;
    int user, gm1,gm2, sort_naipe1, sort_naipe2, total;
    char* naipe1; char* naipe2;

    gm1=1+(rand() % 10);gm1=1+(rand() % 10);
    gm2=1+(rand() % 10);gm2=1+(rand() % 10);
    sort_naipe1 =rand() % 4;sort_naipe1 =rand() % 4;
    sort_naipe2 =rand() % 4;sort_naipe2 =rand() % 4;

    if(sort_naipe1==0)
        naipe1="ouros";
    else if(sort_naipe1==1)
        naipe1="espadas";
    else if(sort_naipe1==2)
        naipe1="paus";
    else if(sort_naipe1==3)
        naipe1="copas";

    if(sort_naipe2==3)
        naipe2="ouros";
    else if(sort_naipe2==2)
        naipe2="espadas";
    else if(sort_naipe2==1)
        naipe2="paus";
    else if(sort_naipe2==0)
        naipe2="copas";
    printf("Mão 1 e 2\n");
    printf("        --Você retirou um %d de %s e um %d de %s--\n", gm1, naipe1, gm2, naipe2);
    if(gm1==1 || gm2==1){ //MÂO 1 E 2
        if(gm1==1){
             do{
                printf("\n        \t      Você tem um Ás.\n\tQuanto você quer que valha o seu Ás de %s?\n\t\tInsira um valor válido: ", naipe1);
                scanf("%d", &gm1);
            }while(gm1!=1 && gm1!=11);

        } if(gm2==1){
            do{
                printf("\n            \t      Você tem um Ás.\n\tQuanto você quer que valha o seu Ás de %s?\n\t\tInsira um valor válido: ", naipe2);
                scanf("%d", &gm2);
            } while(gm2!=1 && gm2!=11);
        }
    }
    printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2);
    total=gm1+gm2;
    if(total==21){
        system("cls");
        system("color a");
        printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2);
        printf("\n\tVocê fez Blackjack (somou %d na primeira rodada) e ganhou\n", total);
        return 0;
    } else{
        printf("\n\t\t    Você somou %d\n\n\t\tDeseja mais uma carta?\n\t\t  Aperte S para SIM\n\t\t  Aperte N para NÃO\n\t\t    (depois Enter)\n \t\t\t  ", total);
    mao(char son1, int gm3, int sort_naipe3, char* naipe3);
    } system("cls");

}







/*if(gm4==1){
                    do{
                        printf("\n        \t      Você tem um Ás.\n\tQuanto você quer que valha o seu Ás de %s?\n\t\tInsira um valor válido: ", naipe4);
                        scanf("%d", &gm4);
                    }while(gm4!=1 && gm4!=11);

                    printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3, gm4, naipe4);
                    total+=gm4-1;
                }
                if(total==21){
                    printf("\n            --Você retirou um %d de %s --", gm4, naipe4);
                    system("cls");
                    system("color a");
                    printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3, gm4, naipe4);
                    printf("\n\t\tVocê somou %d e ganhou\n", total);
                    return 0;
                }
                if(total>21){
                    system("cls");
                    system("color c");
                    printf("\n            --Você retirou um %d de %s --", gm4, naipe4);
                    printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3, gm4, naipe4);
                    printf("\n\t\t\tGame over\n\t\tVocê somou %d e excedeu 21\n", total);
                    getch();
                    return 0;
                }
                printf("\n\t\t    Você somou %d", total);
                printf("\n\t\tDeseja mais uma carta?\n\t\t  Aperte S para SIM\n\t\t  Aperte N para NÃO\n\t\t    (depois Enter)\n\n\t\t\t");

                char son3;
                fflush(stdin);
                scanf("%c", &son3);*/
