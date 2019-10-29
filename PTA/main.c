#include<stdio.h>
int main(void) {
    int n, score;
    int count_A = 0, count_B = 0, count_C = 0, count_D = 0, count_E = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &score);
        if(score >= 90)
            ++count_A;
        else if(score >= 80)
            ++count_B;
        else if(score >= 70)
            ++count_C;
        else if(score >= 60)
            ++count_D;
        else
            ++count_E;
    }
    printf("%d %d %d %d %d\n", count_A, count_B, count_C, count_D, count_E);
    return 0;
}
