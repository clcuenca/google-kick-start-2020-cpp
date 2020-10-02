/// Google Kick Start 2020 - Round A
/// Allocation
/// Author: Carlos L. Cuenca

#include <iostream>
#include <algorithm>
#include <vector>

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables
    
    int              inputCount  ;
    int              inputNumber ;
    int              houses      ;
    int              cost        ;
    int              budget      ;
    int              totalHouses ;
    int              buffer      ;
    std::vector<int> houseCosts  ;
    
    /// -------
    /// Program
    
    std::cin >> inputCount;
    
    inputNumber = 1;
    
    while(inputCount--) {
        
        totalHouses = 0;
        
        std::cin >> houses;
        std::cin >> budget;
        
        while(houses--) {
            
            std::cin >> buffer;
            houseCosts.push_back(buffer);
            
        }
            
        std::sort(houseCosts.begin(), houseCosts.end());
        
        for(uint32_t index = 0; index < houseCosts.size(); index++) {
            
            budget -= houseCosts[index];
            
            if(budget < 0) break;
            
            totalHouses++;
            
        }
        
        std::cout << "Case #" << inputNumber << ": " << totalHouses << std::endl;

        inputNumber++;
        houseCosts.clear();

    }
    
    return 0;

}