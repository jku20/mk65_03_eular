#include <stdio.h>

int main() {
    int n = 100;
    int square_of_sums = n*n*(n+1)*(n+1)/4;
    int sum_of_square = n*(n+1)*(2*n+1)/6;
    int ans = square_of_sums-sum_of_square;

    printf("%d",ans);

    return 0;
}
