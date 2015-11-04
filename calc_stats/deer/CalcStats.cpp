#include "CalcStats.hpp"
#include <limits>
#include <iostream>

int minimum(int arr[], int n) {
    int min = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

int maximum(int arr[], int n) {
    int max = arr[0];

    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int numElements(int arr[], int n) {
    int war = arr[n];
    war++;
    return n;
}

double averageVal(int arr[], int n) {
    double total = arr[0];

    for(int i=1; i<n; i++) {
        total += arr[i];
    }

    return total/n;
}