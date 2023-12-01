/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"



using namespace std;
int main() {
    std::cout << "Task 1" << std::endl;
    int A, B;
    cin >> A >> B;
    printNumbers(A, B);
    std::cout << "Task 2" << std::endl;
    int N;
    cin >> N;
    if (isPowerOfTwo(N)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    std::cout << "Task 3" << std::endl;
    int N;
    cin >> N;
    int sum = sumOfDigits(N);
    cout << "Sum of digits: " << sum << endl;
    std::cout << "Task 4" << std::endl;
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    std::cout << "Task 5" << std::endl;
    string word;
    cin >> word;
    if (isPalindrome(word)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    std::cout << "Task 6" << std::endl;
    int secondLargest = findSecondLargest();
    cout << "The second largest element is: " << secondLargest << endl;
    std::cout << "Task 7" << std::endl;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int reversed = reverseNumber(n, 0);
    cout << "The number in reverse order is: " << reversed << endl;
    std::cout << "Task 8" << std::endl;

    std::cout << "Task 9" << std::endl;
    std::cout << "Task 10" << std::endl;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    string result = permuteString(s);
    cout << "The permuted string is: " << result << endl;

    return 0;
}
