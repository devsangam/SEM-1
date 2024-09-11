#include<stdio.h>
void main()
{
    float m, p, c, e;
    printf("Enter marks of Maths, Physics, Chemistry, and Enterence Exam in Order:\n");
    scanf("%f%f%f%f", &m, &p, &c, &e);
    float cm = m/2 +p/2 + c/2 +e;
    printf("cutoff marks are:\t%f\n", cm);

}
