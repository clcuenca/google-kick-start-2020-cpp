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

        std::vector<int> wheels(wheelCount, 1);
        
        for(int index = 0; index < wheels.size(); index++)
            std::cin >> wheels[index];

        for(int value = 1; value <= maxValue; value++) {

            moves = INT_MAX;
            int currentMoves = 0;

            for(int wheel = 0; wheel < wheels.size(); wheel++) {

                int movesPositive;

                if(wheels[wheel] <= value) movesPositive = value - wheels[wheel];
                else movesPositive = maxValue - wheels[wheel] + value;

                int movesNegative;

                if(wheels[wheel] >= value) movesNegative = wheels[wheel] - value;
                else movesNegative = wheels[wheel] + (maxValue - value);

                currentMoves += std::min(movesPositive, movesNegative);

            }

            moves = std::min(currentMoves, moves);

        }

        std::cout << "Case #" << caseNumber << ": " << moves << std::endl; 
    
    }
    
    return SUCCESS;
    
}