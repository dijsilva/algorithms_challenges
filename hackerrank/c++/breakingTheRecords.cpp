#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<int> breakingRecords(std::vector<int> scores);


int main(){
    int n, least = 0, best = 0, total_least = 0, total_best = 0;
    std::vector<int> valores;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        int score = 0;
        std::cin >> score;
        valores.push_back(score);
    }

    std::vector<int> result = breakingRecords(valores);

    std::cout << result[0] << " "  << result[1] << std::endl;

    return 0;
}


std::vector<int> breakingRecords(std::vector<int> scores){
    std::vector<int> records;
    int least = scores[0], best = scores[0], total_best = 0, total_least = 0;
    for (auto score: scores){
        if (score > best){
            best = score;
            total_best++;
        }

        else if (score < least){
            least = score;
            total_least++;
        }
    }
    records.push_back(total_best);
    records.push_back(total_least);
    return records;
};
