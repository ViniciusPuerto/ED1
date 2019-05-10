#include <stdio.h>

int mostFrequent(int arr[], int n) 
{ 
   
  
    // find the max frequency using linear traversal 
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    //If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  
    return res; 
} 
  
// driver program 
int main() 
{ 
    int cout, tam, a ;
    tam = 10;
    int arr[] = {20, 25, 85, 40, 25, 90, 25, 40, 55, 40};

    for (int i = 0; i < tam; ++i)
    {
        for (int j = i + 1; j < tam; ++j)
        {
            if (arr[i] < arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    for (int i = 0; i < tam; ++i)
    {
        printf("%d\n", arr[i]);
    }

    int n = sizeof(arr) / sizeof(arr[0]); 
    cout = mostFrequent(arr, 2); 
    printf("%d \n", cout);
    return 0; 
} 