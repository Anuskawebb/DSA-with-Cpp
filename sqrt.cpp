#include <bits/stdc++.h>
using namespace std;
 
float squareRoot(int number, int precision)
{
    int start = 0, end = number;
    int mid;
 
    // variable to store the answer
    float ans;
 
    // for computing integral part
    // of square root of number
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        if (mid * mid < number) {
            start = mid + 1;
            ans = mid;
        }
 
        // decrementing end if integral part
        // lies on the left side of the mid
        else {
            end = mid - 1;
        }
    }
 
    // For computing the fractional part
    // of square root upto given precision
    float increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
 
        // loop terminates when ans * ans > number
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
int main()
{
    // Function calling
    cout << squareRoot(50, 3) << endl;
 
    // Function calling
    cout << squareRoot(10, 4) << endl;
 
    return 0;
}
