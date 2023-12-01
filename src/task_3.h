int sumOfDigits(int N) {
    if (N < 10) {
        return N;
    } else {
        return N % 10 + sumOfDigits(N / 10);
    }
}