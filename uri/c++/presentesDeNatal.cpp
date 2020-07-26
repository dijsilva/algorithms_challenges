#include <stdio.h>

int main(){

    int n;
    while (scanf("%d", &n) == 1){
        if (n == 0) break;
        int gifts [n*2];
        int gift;
            for (int i = 0; i < n * 2; i++){
            scanf("%d", &gift);
            gifts[i] = gift;
        }

        int first_par = gifts[0]  + gifts[n*2 - 1];

        if (n == 4){
            int second = 0;
            for (int i = 1; i < (n*2 - 2); i++){
                for (int j = i+1; j < (n*2 - 1); j++){
                    printf("%d + %d = %d\n", gifts[i], gifts[j],gifts[i] + gifts[j]);
                }
            }
        }

        //printf("%d\n", first_par);

    }

    return 0;
}
