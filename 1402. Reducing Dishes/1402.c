#include <stdlib.h> 
#include <stdio.h>  


int compare_int(const void* a, const void* b) {
    
    return (*(int*)a - *(int*)b);
}

int maxSatisfaction(int* satisfaction, int satisfactionSize) {
    
    
    qsort(satisfaction, satisfactionSize, sizeof(int), compare_int);

    
    int max_sum = 0;
    int current_satisfaction_sum = 0;

   
    for (int i = satisfactionSize - 1; i >= 0; i--) {
        
        current_satisfaction_sum += satisfaction[i];

        if (current_satisfaction_sum <= 0) {
            break; 
        }

        max_sum += current_satisfaction_sum;
    }

    return max_sum;
}