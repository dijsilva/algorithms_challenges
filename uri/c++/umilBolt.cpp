#include <stdio.h>

int main(){
    int t;

    while (scanf("%d", &t) == 1){
        float ti, mais_rapida;
        for (int i = 0; i < t; i++){
            scanf("%f", &ti);
            if (i < 1)
                mais_rapida = ti;
            else{
                if (ti < mais_rapida)
                    mais_rapida = ti;
            }
        }
        printf("%2.2f\n", mais_rapida);
    }
    return 0;
}

