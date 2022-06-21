#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
#include<time.h>

int main(){
    system("color b");
    setlocale(LC_ALL, "portuguese");
    srand(time(NULL));

    float aux;
    char son1;
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
        fflush(stdin);
        scanf("%c", &son1);
        if(son1=='s'){son1='S';}
    } system("cls");

    if(son1=='S'){ //MÂO 3
        printf("Mão 3\n");
        int gm3, sort_naipe3;
            char* naipe3;
            gm3=1+(rand() % 10);gm3=1+(rand() % 10);
            sort_naipe3 =rand() % 4;sort_naipe3 =rand() % 4;
            if(sort_naipe3==3)
                naipe3="ouros";
            else if(sort_naipe3==2)
                naipe3="espadas";
            else if(sort_naipe3==1)
                naipe3="paus";
            else if(sort_naipe3==0)
                naipe3="copas";
            total+=gm3;
            printf("\n            --Você retirou um %d de %s --\n", gm3, naipe3);
            if(gm3==1){
                do{
                    printf("\n        \t      Você tem um Ás.\n\tQuanto você quer que valha o seu Ás de %s?\n\t\tInsira um valor válido: ", naipe3);
                    scanf("%d", &gm3);
                }while(gm3!=1 && gm3!=11);
                total+=gm3-1;
            }
            printf("\nVocê tem: | %d de %s |\n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3);
            if(total==21){
                system("cls");
                system("color a");
                printf("\n            --Você retirou um %d de %s --", gm3, naipe3);
                printf("\nVocê tem: \n |%d de %s |\n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3);
                printf("\n\t\tVocê somou %d e ganhou\n", total);
                return 0;
            }
            if(total>21){
                system("cls");
                system("color c");
                printf("\n            --Você retirou um %d de %s --", gm3, naipe3);
                printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n| %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3);
                printf("\n\t\t\tGame over\n\t\tVocê somou %d e excedeu 21\n", total);
                getch();
                return 0;
            }
            printf("\n\t\t    Você somou %d", total);
            printf("\n\t\tDeseja mais uma carta?\n\t\t  Aperte S para SIM\n\t\t  Aperte N para NÃO\n\t\t    (depois Enter)\n\n\t\t\t");

            char son2;
            fflush(stdin);
            scanf("%c", &son2);
            if(son2=='s'){son2='S';}

        if(son2=='S'){ //MÂO 4
            printf("Mão 4\n");
            int gm4, sort_naipe4;
                char* naipe4;
                gm4=1+(rand() % 10);gm4=1+(rand() % 10);
                sort_naipe4 =rand() % 4;sort_naipe4 =rand() % 4;
                if(sort_naipe4==3)
                    naipe4="ouros";
                else if(sort_naipe4==2)
                    naipe4="espadas";
                else if(sort_naipe4==1)
                    naipe4="paus";
                else if(sort_naipe4==0)
                    naipe4="copas";
                total+=gm4;
                printf("\n            --Você retirou um %d de %s --", gm4, naipe4);
                if(gm4==1){
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
                scanf("%c", &son3);
                if(son3=='s'){son3='S';}

                if(son3=='S'){ //MÂO 5
                    printf("Mão 5\n");
                    int gm5, sort_naipe5;
                    char* naipe5;
                    gm5=1+(rand() % 10);gm5=1+(rand() % 10);
                    sort_naipe5 =rand() % 4;sort_naipe5 =rand() % 4;
                    if(sort_naipe5==3)
                        naipe5="ouros";
                    else if(sort_naipe5==2)
                        naipe5="espadas";
                    else if(sort_naipe5==1)
                        naipe5="paus";
                    else if(sort_naipe5==0)
                        naipe5="copas";
                    total+=gm5;
                    printf("\n            --Você retirou um %d de %s --", gm5, naipe5);
                    if(gm5==1){
                        do{
                            printf("\n        \t      Você tem um Ás.\n\tQuanto você quer que valha o seu Ás de %s?\n\t\tInsira um valor válido: ", naipe5);
                            scanf("%d", &gm5);
                        }while(gm5!=1 && gm5!=11);
                        printf("\nVocê tem: \n| %d de %s |\n| %d de %s |\n| %d de %s |\n| %d de %s |\n|  %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3, gm4, naipe4, gm5, naipe5);
                        total+=gm5-1;
                    }
                    if(total==21){
                        system("cls");-
                        system("color a");
                        printf("\n            --Você retirou um %d de %s --", gm5, naipe5);
                        printf("\nVocê tem: \n| %d de %s | %d de %s | %d de %s | %d de %s |  %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3, gm4, naipe4, gm5, naipe5);
                        printf("\n\t\tVocê somou %d e ganhou\n", total);
                        return 0;
                    }
                    if(total>21){
                        system("cls");
                        system("color c");
                        printf("\n            --Você retirou um %d de %s --", gm5, naipe5);
                        printf("\nVocê tem: \n| %d de %s | %d de %s | %d de %s | %d de %s |  %d de %s |\n", gm1, naipe1, gm2, naipe2, gm3, naipe3, gm4, naipe4, gm5, naipe5);
                        printf("\n\t\t\tGame over\n\t\tVocê somou %d e excedeu 21\n", total);
                        getch();
                        return 0;
                    }
                    printf("\n\t\t    Você somou %d", total);
                    printf("\n\t\tDeseja mais uma carta?\n\t\t  Aperte S para SIM\n\t\t  Aperte N para NÃO\n\t\t    (depois Enter)\n\n\t\t\t");
                }
            }
        }

    return 0;
}
