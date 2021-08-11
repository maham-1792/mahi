#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 

    int ptr1,ptr2;
    ptr1 = *a + *b;
    ptr2 =  (*a - *b);
    *a = ptr1;
    *b = ptr2;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
