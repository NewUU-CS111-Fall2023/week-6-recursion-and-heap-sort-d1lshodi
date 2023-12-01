int findSecondLargest() {
    int largest = 0;
    int secondLargest = 0;
    int num;

    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest) {
            secondLargest = num;
        }
    }

    return secondLargest;
}