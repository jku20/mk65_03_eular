#include <stdio.h>

int main() {
    long ans = 0;
    int largest_num = 4000000;
    int a = 0;
    int b = 1;
    int tmp;
    while(b < largest_num) {
        if(!(b&1)) {
            ans += b;
        }
        tmp = a;
        a = b;
        b += tmp;
    }

    printf("%ld\n",ans);

    return 0;
}
