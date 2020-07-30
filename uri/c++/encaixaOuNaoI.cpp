#include <iostream>

using namespace std;

int main(){
    long long int n, a, b, i;
    string sa, sb;
    cin >> n;

    for (i = 0; i < n; i++){
        cin >> a >> b;
        sa = to_string(a);
        sb = to_string(b);
        if (sa.size() >= sb.size()){
            string sub = sa.substr(sa.size() - sb.size(), sb.size());

            if (!sub.compare(sb)){
                cout << "encaixa" << endl;
            }
            else {
                cout << "nao encaixa" << endl;
            }
        }
        else {cout << "nao encaixa" << endl;}

    }

    return 0;
}
