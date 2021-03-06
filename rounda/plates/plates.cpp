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
    
    /// -------
    /// Program
    
    std::cin >> inputCount;
    
    inputNumber = 1;
    
    while(inputCount--) {
        
        std::cin >> stackNumber ; // N
        std::cin >> plates      ; // K
        std::cin >> use         ; // P

        std::cout << "Stack Number: " << stackNumber << std::endl;
        std::cout << "Plates: " << plates << std::endl;
        std::cout << "Use: " << use << std::endl;
        
        std::vector<std::vector<int>> stacks(stackNumber, std::vector<int>(plates, 0));
        std::vector<std::vector<int>> dp(stackNumber + 1, std::vector<int>(use + 1, 0));

        // Input
        for(int index = 0; index < stackNumber; index++)
            for(int jindex = 0; jindex < plates; jindex++)
                std::cin >> stacks [index][jindex];

        // Process
        for(int stack = 0; stack < stackNumber; stack++) 
            for(int plate = 0; plate <= use; plate++) {

                int sum = 0;

                std::cout << "Kindex: ";
                
                for(int kindex = 0; kindex <= plates; kindex++) {

                    std::cout << kindex << " ";

                    if(plate + kindex > use) break;

                    dp[stack + 1][plate + kindex] =
                        std::max(dp[stack + 1][plate + kindex], sum + dp[stack][plate]);

                    if(kindex != plates) sum += stacks[stack][kindex];

                }

                std::cout << std::endl;

            }

        for(int index = 0; index < stackNumber; index++) {
            for(int jindex = 0; jindex < plates; jindex++) {

                std::cout << stacks[index][jindex] << " ";

            }

            std::cout << std::endl;

        }

        std::cout << std::endl;

        for(int index = 0; index <= stackNumber; index++) {

            for(int jindex = 0; jindex <= use; jindex++) {

                std::cout << dp[index][jindex] << " ";

            }

            std::cout << std::endl;

        }

        // Output
        std::cout << "Case #" << inputNumber << ": " << dp[stackNumber][use] << std::endl;
        
        inputNumber++;

    }
    
    return 0;
    
}