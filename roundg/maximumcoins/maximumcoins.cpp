/// Google Kick Start - Round G
/// Maximum Coins
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
    int number     ;
    int maximum    ; 
    int caseNumber ;

    /// -------
    /// Program

    std::cin >> inputCount;

    caseNumber = 0;

    while(inputCount--) {

    	maximum = 0;

    	std::cin >> number;

    	std::vector<std::vector<int>> matrix(number, std::vector<int>(number, 0));

    	// Load the Matrix
    	for(int row = 0; row < matrix.size(); row++)
    		for(int column = 0; column < matrix[index].size(); column++)
    			std::cin >> matrix[row][column];

    	for(int row = 0; row < matrix.size(); row++)
    		for(int column = 0; column < matrix[index].size(); column++) {
    		
    			int sum = 0;


    		}




    	std::cout << "Case #" << caseNumber << ": " << maximum << std::endl;

    }
    

	return SUCCESS;

}