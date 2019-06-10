#include<stdio.h>
#include<limits.h>
 
/* This function prints the maximum occuring element of array */
void getMaxCountElement(int *array, int size) {
    int i, j, maxCount, maxElement, count;
    maxCount = INT_MIN;
    /* Count the frequency of every elemenet of array, 
    and check if it is greater than maximum count element 
    we found till now and update it accordingly  */
    for(i = 0; i< size; i++){
        count = 1;
        for(j = i+1; j < size; j++){
            if(array[j] == array[i]){
                count++;
                /* If count of current element is more than 
                maxCount, uodate maxCount and maxElement */
                if(count > maxCount){
                    maxCount = count;
                    maxElement = array[j];
                }
            }
        }
    }
    printf("Maximum Repeating Element : %d\nCount : %d",
        maxElement, maxCount);
}
  
int main() {
    int array[11] = {20, 25, 85, 40, 25, 90, 25, 40, 55, 40, 40};
 
    getMaxCountElement(array, 10);
     
    return 0;
}