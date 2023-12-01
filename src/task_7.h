int reverseNumber(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    int digit = n % 10;
    reversed = (reversed * 10) + digit;
    return reverseNumber(n / 10, reversed);
}