#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <numeric>

int main(){
    int m;
    int *posicoes = new (std::nothrow) int[3];


    while(scanf("%d", &m) == 1){
        if (m == 0)
            break;

        int toques = 0, pos= 1;

        // scanf("%d %d %d", &first_l, &first_c, &first_r);        
        for (int i = 0; i < m; i++){
            scanf("%d %d %d", &posicoes[0], &posicoes[1], &posicoes[2]);
            
            if(std::accumulate(posicoes, posicoes+2, 0) != 0){
                if (posicoes[pos] == 1){
                    if(pos == 2){
                        if (posicoes[1] != 0){
                            toques = toques + 2;
                            pos = 0;
                        }
                        else {
                            toques = toques + 1;
                            pos = 1;
                        }
                    }
                    else if (pos == 1){
                        if(posicoes[0] == 0){
                            toques = toques + 1;
                            pos = 0;
                        }
                        else {
                            toques = toques + 1;
                            pos = 2;
                        }
                    }
                    else if (pos == 0){
                        if (posicoes[1] == 0){
                            toques = toques + 1;
                            pos = 1;
                        }
                        else {
                            toques = toques + 2;
                            pos = 2;
                        }
                    }
                }
            }
        }

        printf("%d\n", toques);
   
    }
    delete[] posicoes;
    return 0;
}
