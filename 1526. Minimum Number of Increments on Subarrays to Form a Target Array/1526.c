#include <stdio.h> 

int minNumberOperations(int* target, int targetSize) {
    
    int operations = 0;
    
    int prev_height = 0;

    for (int i = 0; i < targetSize; i++) {
        
        if (target[i] > prev_height) {
            
            operations += (target[i] - prev_height);
        }

        prev_height = target[i];
    }

    return operations;
}