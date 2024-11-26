
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int vowel = 0, i=0;
  char str[80];
  FILE* ptr;
  ptr = fopen("Hello.txt", "r");

  if (ptr == NULL) 
  {
    printf("Error While opening file");
    exit(1);
  }
  
  while(fgets(str, 80, ptr) != NULL)
  {
        puts(str);
        i = 0;
        while(str[i] != '\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+('a'-'A');
        }
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        i++;
        }
  }
    fclose(ptr);
    printf("number of vowels is:\t%i\n", vowel);
  }
  