#include <stdio.h>

using namespace std;

int main(){
    
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        unsigned long long v = 1;
        scanf("%d", &x);
        for (int j = 0; j < x; j++){
            if (j < 63){
                v *= 2;
            }
            else {
                v /= 6000;
            }
        }
        if (x < 64){
            v /= 12000;
        }
        printf("%llu kg\n", v);
    }


    return 0;
}
