#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    char c[100];
    // Read and save an integer, double, and String to your variables.
    scanf(" %d %lf\n%[^\n]", &i1, &d1,c);
    // Print the sum of both integer variables on a new line.
    printf("%d\n%0.1lf\n%s%s",i+i1,d+d1,s,c);
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    

    return 0;
