#include <stdio.h>

int count_evens(int low, int high) {
    int count_high = high / 2;
    int count_low = (low - 1) / 2;
    return count_high - count_low;
}

int main() {
    int low, high;
    
    scanf("%d %d", &low, &high);
    
    int result = count_evens(low, high);
    printf("%d\n", result);
    
    return 0;
}
