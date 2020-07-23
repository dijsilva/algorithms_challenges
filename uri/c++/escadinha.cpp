#include <iostream>

using namespace std;                                  
                                                      
int main(){                                           
                                                      
    int n, tot_escadinha = 1;
    cin >> n;                                        
    int p[n];
    if (n > 2) {
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
        for (int i = 0; i < n-2; i++){
            if (p[i] - p[i+1] != p[i+1] - p[i+2])
                tot_escadinha++;
        }
    }
    cout << tot_escadinha << endl;



    return 0;
}
