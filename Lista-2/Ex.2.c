#include <stdio.h>
#include <string.h>


struct Jogador {
    char nome[31];
    char posicao;
    int forca;

};


float forcaPonderada(struct Jogador jogadores[]) {

    float forcaG = 0, fL = 0, fZ = 0, fV = 0, fM = 0, fA = 0;

    for (int i = 0; i < 11; i++){
        if (jogadores[i].posicao == 'G'){
            forcaG = jogadores[i].forca * 8;
        } else if (jogadores[i].posicao == 'L'){
            fL += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'Z'){
            fZ += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'V'){
            fV += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'M'){
            fM += jogadores[i].forca;
        } else if (jogadores[i].posicao == 'A'){
            fA += jogadores[i].forca;
        }
    }

    float forca = (forcaG + 10 * (fL) + 5 * (fZ) + 8 * (fV) + 11 * (fM) + 12 * (fA)) / 100;

    return forca;
}

int main() {
    struct Jogador time1[11], time2[11];
    char nomeTime1[31], nomeTime2[31];

   
    scanf("%[^\n]%*c", nomeTime1);

    for (int i = 0; i < 11; i++){
        scanf("%[^;];%c;%d%*c", time1[i].nome, &time1[i].posicao, &time1[i].forca);
    }

    scanf("%[^\n]%*c", nomeTime2);

    for (int i = 0; i < 11; i++){
        scanf("%[^;];%c;%d%*c", time2[i].nome, &time2[i].posicao, &time2[i].forca);
    }

   
    float forcaTime1 = forcaPonderada(time1);
    float forcaTime2 = forcaPonderada(time2);

   
    printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
    printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);

    
    if (forcaTime1 > forcaTime2){
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaTime2 > forcaTime1){
        printf("%s eh mais forte\n", nomeTime2);
    }else{
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}