/// Google Kick Start - Round G
/// Kick_start
/// Author: Carlos L. Cuenca
/// Date: 10/18/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables
    
    int inputCount ;
    int caseNumber ;
    int wheelCount ;
    int maxValue   ;
    int moves      ;
    
    /// -------
    /// Program
    
    std::cin >> inputCount;
    
    caseNumber = 0;
    
    while(inputCount--) {
        
        caseNumber++;
        
        std::cin >> wheelCount >> maxValue;

        std::vector<int> wheels(wheelCount);
        
        for(int index = 0; index < wheels.size(); index++) {
        
            std::cin >> wheels[index];

            wheels[index]--;
        
        }

        moves = INT_MAX;
        
        // Select a wheel
        for(int index = 0; index < wheels.size(); index++) {

            int currentMoves = 0;

            // Loop through the other wheels
            for(int jindex = 0; jindex < wheels.size(); jindex++) {

                // As long as we don't get to the current wheel
                int movesPositive;

                if(wheels[jindex] <= wheels[index]) movesPositive = wheels[index] - wheels[jindex];
                else movesPositive = maxValue - wheels[jindex] + wheels[index];

                int movesNegative;

                if(wheels[jindex] >= wheels[index]) movesNegative = wheels[jindex] - wheels[index];
                else movesNegative = wheels[jindex] + (maxValue - value);

                currentMoves += std::min(movesPositive, movesNegative);

            }

            moves = std::min(currentMoves, moves)

        }


        std::cout << "Case #" << caseNumber << ": " << moves + 1 << std::endl; 
    
    }
    
    return SUCCESS;
    
}