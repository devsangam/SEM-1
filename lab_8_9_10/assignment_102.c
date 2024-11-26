#include <stdio.h>
#include <stdlib.h>
int main()
{
  int lines = 0, i=0, words=1, chars=0;
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
        if(str[i]==' '){
            words++;
        }
        if(str[i]=='\n'){
            lines++;
        }
        chars++;
        i++;
        }
  }
    printf("number of words is:\t%i\n", words);
    printf("number of lines is:\t%i\n", lines);
    printf("number of characters is:\t%i\n", chars);
    fclose(ptr);
  }
  