#include <stdio.h>

int main(){

    int x1, x2, y1, y2, n_testes = 1;

    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) == 4){
        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0){
            break;
        }
        else {
            int n, total_meteorito = 0;
            scanf("%d", &n);
            for (int i = 0; i < n; i++){
                int x, y;
                scanf("%d %d", &x, &y);

                if (x >= x1 && x <= x2 && y <= y1 && y >= y2)
                    total_meteorito++;
            }
            printf("Teste\n%d\n", n_testes);
            printf("%d\n\n", total_meteorito);
        }
        n_testes++;
    }


    return 0;
}
