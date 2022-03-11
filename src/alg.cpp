// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int i = 0;
    int j = size - 1;
    int counter = 0;
    while (i < j) {
        if (arr[i] == value) {
            counter++;
        }
        if (arr[j] == value) {
            counter++;
        }
        i++;
        j--;
    }
    if (i == j) {
        if (arr[i] == value) {
            counter++;
        }
    }
    return counter;
}
