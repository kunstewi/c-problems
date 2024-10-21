#include <stdio.h>
int main(){
    int m1, m2, m3, m4, m5, aggregate;
    float percentage;
    printf("\nEnter marks in 5 subjects:");
    scanf("%d %d %d %d %d",&m1, &m2, &m3, &m4, &m5);
    aggregate = m1 + m2 + m3 + m4 + m5;
    percentage = aggregate/5;
    printf("Aggregate Marks:%d\n",aggregate);
    printf("Percentage Marks:%.3f\n",percentage);
    return 0;
}