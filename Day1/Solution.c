#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    // Declare second integer, double, and String variables.
    int test;
    double test2;
    char test3[1000];
    // Read and save an integer, double, and String to your varia
    scanf("%d%lf",&test,&test2);
    getchar();
    scanf("%[^\n]s",test3);
    printf("%d\n%.1lf\n",(i+test),(d+test2));
    printf("%s%s",s,test3);
    return 0;
