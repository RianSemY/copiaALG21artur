#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#include<string.h>
int eleven_or_one(int number){
    if(number == 1){
        printf("Você tem um às, quer que valha 11 ou apenas 1?\n");
        scanf("%d", &number);
    } return number;
}
int lucker_number(int number){
    number = 1+(rand() % 10);
    return number;
}
char confirmation(char confirm){
    printf("\n\nDeseja mais uma carta? Y/N\n");
    scanf("%c", &confirm);
    fflush(stdin);
    return confirm;
}
int main(){
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));
    char confirm;
    char naipe[4][8] /*o primeiro vetor é o naipe*/, changed_naipe[21][8]; /*o primeiro vetor é a mão*/
    int number[21], total=0, i=1, aux;

    strcpy(naipe[0],"paus");
    strcpy(naipe[1],"ouros");
    strcpy(naipe[2],"copas");
    strcpy(naipe[3],"espadas");

    strcpy(changed_naipe[0], naipe[rand() % 4, rand() % 4]);
    strcpy(changed_naipe[1], naipe[rand() % 4, rand() % 4]);

    number[0] = lucker_number(number[0]);
    number[1] = lucker_number(number[1]);

    printf("/nMão 1 e 2: \n");
    printf("Você sorteou um %d de %s e um %d de %s", number[0], changed_naipe[0], number[1], changed_naipe[1]);
    total = number[0] + number[1];

   confirm = confirmation(confirm);
    if(confirm == 'y' || confirm == 'y'){
        do{ i++;
            printf("\n---------------------------------------\n");
            printf("\nMão %d:\n", i);
            strcpy(changed_naipe[i], naipe[rand() % 4, rand() % 4]);

            number[i] = lucker_number(number[i]);
            total += number[i];

            printf("Você sorteou um %d de %s\n\n", number[i], changed_naipe[i]);
            if(total>21){
                    system("color c");
               printf("Você somou %d, excedeu 21 e perdeu!", total);
               getch(); getch();
                return 0;
            }
            aux = i;
            printf("Suas cartas são:\n| ");
            for(i=0; i<=aux; i++){
                printf("%d de %s | ", number[i], changed_naipe[i]);
            }
            i = aux;
            confirm = confirmation(confirm);

        }while(confirm == 'y' || confirm == 'y');
    }
    aux = i;
    for(i=0; i<aux; i++){
        if(number[i] == 1) number[i] = eleven_or_one(number[i]);

    } i = aux;

    if(total == 21 && i == 1){
        printf("Você fez BlackJack, parabéns!");
    }
    else if(total == 21){
        printf("Você somou 21, parábens");
    }

    printf("\n\n");
    return 0;
}

