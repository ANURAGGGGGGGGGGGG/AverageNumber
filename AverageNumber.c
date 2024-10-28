#include <stdio.h>
int average(int, int, int);
int average(int a, int b, int c)
{
    int abc = a + b + c;
    int res = abc / 3;
    return res;
}
int main()
{
    int a, b, c;
    printf("Write the value of a ");
    scanf("%d", &a);
    printf("Write the value of b ");
    scanf("%d", &b);
    printf("Write the value of c ");
    scanf("%d", &c);
    int result = average(a, b, c);
    printf("The average of this is %d", result);
    return 0;
}
