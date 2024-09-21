//pushing zero to end//
#include <iostream> 
using namespace std; 
  
// Function which pushes all zeros to end of an array. 
void pushZerosToEnd(int arr[], int n) 
{ 
    int count = 0;  // Count of non-zero elements 
  
   
    
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[count++] = arr[i]; // here count is  
                                   // incremented 
  
    
    while (count < n) 
        arr[count++] = 0; 
} 
int main() 
{ 
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    pushZerosToEnd(arr, n); 
    cout<< "Array after pushing all zeros to end of array : 
"; 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    return 0; 
} 
