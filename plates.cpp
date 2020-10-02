/// Google Kick Start 2020 - Round A
/// Plates
/// Author: Carlos L. Cuenca

#include <iostream>
#include <algorithm>
#include <vector>

/// --------------
/// Driver Program

int main(int arc, char* argv[]) {
    
    /// -----------------
    /// Program Variables
    
    int inputCount  ;
    int inputNumber ;
    int stackNumber ;
    int plates      ;
    int use         ;
    int buffer      ;
    int totalBeauty ;
    
    /// -------
    /// Program
    
    std::cin >> inputCount;
    
    inputNumber = 1;
    
    while(inputCount--) {
        
        totalBeauty = 0;
        
        std::cin >> stackNumber ; // N
        std::cin >> plates      ; // K
        std::cin >> use         ; // P
        
        std::vector<std::vector<int>> stacks(stackNumber);

        // Input
        for(int index = 0; index < stackNumber; index++)
            for(int jindex = 0; jindex < plates; jindex++) {
                
                std::cin >> buffer;

                stacks[index].push_back(buffer);

            }

        // Process
        for(int index = 0; index < stackNumber; index++) {
            
            int sum = 0;
            
            for(int jindex = 0; jindex < plates; jindex++) {
                
                sum += stacks[index][jindex];
                
                for(int kindex = 0; kindex + jindex + 1 <= use; kindex++) {
                    
                    stacks[index + 1][kindex + jindex + 1] =
                        std::max(stacks[index][kindex] + sum, stacks[index + 1][kindex + jindex + 1]);
                    
                }
                
            }
            
        }

        // Output
        std::cout << "Case #" << inputNumber << ": " << stacks[stackNumber][use] << std::endl;
        
        inputNumber++;
        
    }
    
    return 0;
    
}