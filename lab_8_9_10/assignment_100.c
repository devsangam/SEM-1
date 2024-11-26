#include <stdio.h>
#include <stdlib.h>
int main()
{
    int roll, n, marks=0;
    char name[80];
    FILE* ptr;
    ptr = fopen("LNMIITSTUDENT.dat", "w");
    scanf("%i",&n);
    for(int i =0; i<n; i++){
        scanf("%s", name);
        scanf("%i", &marks);
        scanf("%i", &roll);
        fprintf(ptr, "%s, %i, %i\n", name, roll, marks);
    }
    fclose(ptr);
}