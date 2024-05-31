#include <stdlib.h>

int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize * sizeof(int)); 
    int indx = 0;
    
    for(int i = 0; i < numsSize; i++) {
        int count = 0;
        for(int j = 0; j < numsSize; j++) {
            if(nums[i] == nums[j])
                count++;
        }
        if(count == 1) {
            arr[indx] = nums[i];
            indx++;
        }
    }
    
    *returnSize = indx; 
    return arr; 
}
