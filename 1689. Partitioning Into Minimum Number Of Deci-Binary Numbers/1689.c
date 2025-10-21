#include <stdio.h> 
#include <string.h> 

int minPartitions(char* n) {
    
    char max_digit = '0';

    for (int i = 0; n[i] != '\0'; i++) {
        
        if (n[i] > max_digit) {
            
            max_digit = n[i];
        }

        if (max_digit == '9') {
            break;
        }
    }

    return max_digit - '0';
}