#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n, i;
    while(scanf("%d %d", &n, &i) == 2){;
        int tot = 0;
        while(n--){
            int j, id;
            scanf("%d %d", &id, &j);
            if(id == i && j == 0)
                tot++;
        }
        printf("%d\n", tot);
    }
    return 0;
}
