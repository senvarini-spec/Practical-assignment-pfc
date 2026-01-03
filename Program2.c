//Sum of multiple of n
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    for (int i = n; i <= m; i += n) {
        sum += i;
    }
    printf("SUM = %d", sum);
    return 0;
}
