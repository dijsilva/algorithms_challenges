#include <iostream>

int main(){
    int a, b;


    std::cin >> a >> b;

    if (a % b == 0 || b % a == 0) std::cout << "Sao Multiplos" << std::endl;
    else std::cout << "Nao sao Multiplos" << std::endl;
    return 0;
}
