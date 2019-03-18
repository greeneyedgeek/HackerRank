#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int a0 = *a, b0 = *b;
    *a = a0+b0;
    *b = a0 > b0 ? a0-b0 : b0-a0;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

