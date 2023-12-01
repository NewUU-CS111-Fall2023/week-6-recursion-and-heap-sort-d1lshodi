/*
 * Author:
 * Date:
 * Name:
 */

using namespace std;

void printNumbers(int A, int B) {
    if (A == B) {
        cout << A << " ";
    } else if (A < B) {
        cout << A << " ";
        printNumbers(A + 1, B);
    } else {
        cout << A << " ";
        printNumbers(A - 1, B);
    }
}
