#include <iostream>
#include <queue>
#include <cinttypes>

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables
    
    uint32_t              inputCount      ;
    uint32_t              withdrawMaximum ;
    uint32_t              queueLength     ;
    uint32_t 			  buffer 	      ;
    uint32_t 			  index 		  ;
    uint32_t 			  inputNumber     ; 
    std::queue<uint32_t>  queue           ;
    std::queue<uint32_t>  order 		  ;

    /// -------
    /// Program
    
    std::cin >> inputCount;

    inputNumber = 1;
    
    while(inputCount--) {

    	std::cin >> queueLength;
    	std::cin >> withdrawMaximum;

    	index = 1;

    	// Set the queue
    	while(queueLength--) {

    		std::cin >> buffer;

    		queue.push(buffer);
    		order.push(index++);

    	}

    	std::cout << "Case #" << inputNumber << ": ";

    	while(!queue.empty()) {

    		// If we're less than or at the threshold
    		if(queue.front() <= withdrawMaximum) {

    			std::cout << order.front() << " ";

    			queue.pop();
    			order.pop();

    		// Otherwise, we push the difference 
    		} else {

    			queue.push(queue.front() - withdrawMaximum);
    			order.push(order.front());

    			queue.pop();
    			order.pop();

    		}

    	}

    	std::cout << std::endl;

    	inputNumber++;
    
    }

    return 0;

}