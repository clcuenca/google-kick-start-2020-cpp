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
    
    int inputCount;
    int caseNumber = 1;
    std::string inputString;
    
    std::cin >> inputCount;
    
    while(inputCount--) {
        
        std::cin >> inputString;

        int kicks = 0;
        
        int luckyDay = 0;
        
        for(int index = 0; index < inputString.size(); index++) {

            std::string kick(inputString, index, 4);
            std::string start(inputString, index, 5);

            if(kick == "KICK") kicks++;

            if(start == "START") {

                luckyDay += kicks;

            }
            
        }
        
        std::cout << "Case #" << caseNumber << ": " << luckyDay << std::endl;
        
        caseNumber++;
        
    }

    return SUCCESS;

}