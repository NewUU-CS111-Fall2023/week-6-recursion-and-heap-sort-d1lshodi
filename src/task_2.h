bool isPowerOfTwo(int N) {
    if (N == 1) {
        return true;
    } else if (N % 2 == 0 && N > 0) {
        return isPowerOfTwo(N / 2);
    } else {
        return false;
    }
}
