#include <stdlib.h>
#include "common.h"
#define SIZE 5

int sum(const int*, int);


int main() {
    int array[] = {2, 7, 8,'k',9};
    printf("The sum of the the total of the element in the array is %d\n", sum(array, SIZE));
    printf("The size of the array is %zd\n", sizeof array);

    return 0;
}

int sum(const int* arr, int n) {
    auto long total = 0;
    printf("The size of the first element of the array is %zd bytes\n", sizeof arr);

    for(long i = 0; i < n; i++) {
        printf("The size of the %d th element of the array is %zd bytes\n", i, sizeof i);
        total += arr[i];
    }
    return total;
}
