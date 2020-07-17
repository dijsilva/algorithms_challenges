#include <stdio.h>

int main(){
    int x, n, k;

    scanf("%d", &x);

    while(x--){
        scanf("%d %d", &n, &k);

        int rest = n / k;
        if (rest == 0)
            printf("%d\n", n);
        else{
            int garrafas = n - rest * k + rest;
            printf("%d\n", garrafas);
        }
    }

    return  0;
}
