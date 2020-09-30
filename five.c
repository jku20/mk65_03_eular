#include <stdio.h>

int main() {
    //yeah this is a slow algorithm, I might try to figure out better one later if I feel like it
    int ans = 1;
    int max_num = 20;
    int works = 0;
    int i;
    for(ans = 1;!works; ans++) {
        works = 1;
        for(i = 2; i <= max_num; i++) {
            if(ans%i != 0) {
                works = 0;
            }
        }
    }
    ans--;

    printf("%d", ans);

    return 0;
}
