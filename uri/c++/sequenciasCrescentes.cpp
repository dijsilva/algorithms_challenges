#include <iostream>

using namespace std;

int main(){

    int n;
    while(true){
        cin >> n;
        if (n == 0) break;
        else{
            for (int i = 1; i <= n; i++){
                if (i < n) cout << i << " ";
                    else cout << i << endl;
            }
        }
    }
    return 0;
}
