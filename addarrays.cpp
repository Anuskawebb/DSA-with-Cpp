#include <iostream>  
using namespace std;  
  
int main() {  
    // Declare an array of integers with 5 elements  
    int myArray[5];  
  
     
    myArray[0] = 1;  
    myArray[1] = 2;  
    myArray[2] = 3;  
    myArray[3] = 4;  
    myArray[4] = 5;  
  
    // Print the elements of the array  
    for (int i = 0; i < 5; i++) {  
        cout << myArray[i] << " ";  
    }  
    cout << endl;  
  
    // Modify an element of the array  
    myArray[2] = 6;  
  
    
    for (int i = 0; i < 5; i++) {  
        cout << myArray[i] << " ";  
    }  
    cout << endl;  
  
    // Declare and initialize an array in one line  
    int anotherArray[5] = {10, 9, 8, 7, 6};  
  
    // Print the elements of the array  
    for (int i = 0; i < 5; i++) {  
        cout << anotherArray[i] << " ";  
    }  
    cout << endl;  
  
    return 0;  
}  
