#include<stdio.h>
#include<string.h>
 
 void copy(char *dst, char *src);

int main(void)
{
  char srcString[] = "What about second breakfast?";
  int len1;
  len1 = strlen(srcString);
  char dstString[len1+1];
  copy(dstString, srcString);   //copy srcString to dstString
  printf("%s\n", dstString);
  return 0;
}

void copy(char *dst, char *src)
{
  while(*src != '\0')
  {
    *dst = *src;
    src++;
    dst++;
  }
  *dst = '\0';  //setting the terminal character at the end of dstString 
}
 