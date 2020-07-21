#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int tot = 0;
    std::sort(ar.begin(), ar.end());
    
    for(int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            if (!((ar[i] + ar[j]) % k)) tot++;
        }
    }
    return tot;
}

int main(){
    int n, k, var;
    cin >> n >> k;

    vector<int> values;
    for (int i = 0; i < n; i++){
        cin >> var;
        values.push_back(var);
    }
    int result = divisibleSumPairs(n, k, values);
    cout << result << endl;
    return 0;
}
