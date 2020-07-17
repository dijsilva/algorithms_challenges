#include <iostream>
#include <algorithm>

int main(){
    int n;
    std::string conversion;
    int r, g, b;

    std::cin >> n;
    for (int i = 0; i < n; i++){
        std::cin >> conversion;
        std::cin >> r >> g >> b;

        if (!conversion.compare("mean")){
            std::cout << "Caso #" << i + 1 << ": " << (r + g + b) / 3 << std::endl;
        } 
        else if (!conversion.compare("min")){
            std::cout << "Caso #" << i + 1 << ": " << std::min({r, g, b}) << std::endl;
        }
        else if (!conversion.compare("max")){
            std::cout << "Caso #" << i + 1 << ": " << std::max({r, g, b}) << std::endl;
        }
        else if (!conversion.compare("eye")){
            std::cout << "Caso #" << i + 1 << ": " << int (r * 0.30 + g * 0.59 + b *0.11) << std::endl;
        }
    }
}
