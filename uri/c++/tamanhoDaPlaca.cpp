#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){

    int dim1, dim2, qtd;
    while (scanf("%d %d %d", &dim1, &dim2, &qtd) != EOF){
        if (dim1 > dim2)
            swap(dim1, dim2);
        while(qtd--){
            int dim1_client, dim2_client;
            cin >> dim1_client >> dim2_client;
            if (dim1_client > dim2_client)
                swap(dim1_client, dim2_client);

            printf("%s\n", dim1_client <= dim1 && dim2_client <= dim2 ? "Sim" : "Nao");
        }

    }
    return 0;
}
