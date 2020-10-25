#include <stdio.h>

int main() {
    int ans = 0;
    int max_num = 1000;
    int i;
    for(i = 3; i < max_num; i++) {
        if(!((i % 3) && (i % 5))) {
            ans += i;
        }
    }
    printf("%d\n",ans);

    return 0;
}
