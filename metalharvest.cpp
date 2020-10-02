#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables
    
    uint32_t                                    inputCount      ;
    uint32_t                                    inputNumber     ;
    uint32_t                                    intervalCount   ;
    uint32_t                                    maximumDuration ;
    uint32_t                                    start           ;
    uint32_t                                    end             ;
    uint32_t                                    deployments     ;
    uint32_t                                    delta           ;
    uint32_t                                    lastTime        ;
    uint32_t                                    current         ;
    std::vector<std::pair<uint32_t, uint32_t>>  intervals       ;
    
    /// -------
    /// Program
    
    std::cin >> inputCount;
    
    inputNumber = 1;

    while(inputCount--) {
        
        std::cin >> intervalCount   ;
        std::cin >> maximumDuration ;
        
        while(intervalCount--) {
         
            std::cin >> start ;
            std::cin >> end   ;
            
            intervals.push_back({start, end});
            
        }

        std::sort(intervals.begin(), intervals.end());
        
        lastTime = 0;
        deployments = 0;
        
        for(int index = 0; index < intervals.size(); index++) {
            
            current = 0;
            
            if(lastTime < intervals[index].first) lastTime = intervals[index].first;
            
            if(lastTime < intervals[index].second) {
                
                current = std::ceil(
                    (float) (intervals[index].second - lastTime) /
                    (float) maximumDuration);
                
                deployments += current;
                
                lastTime = lastTime + current*maximumDuration;
                
            }
            
        }
        
        std::cout << "Case #" << inputNumber << ": " << deployments << '\n';
        
        inputNumber++;
        
        intervals.clear();
        
    }
    
    return 0;

}