#include "main.h"
#include <stdio.h>

/*
 *i _stncat - check code
 *
 * Return: ALways 0.
 */

char *_strncat(char *dest, char *src, int n)
{

  char *cPtr = dest;
  int SIZE_1 = 0;
  for (; *cPtr++ != '\0';)
    SIZE_1++;

  int SIZE = SIZE_1 + n;
  char resArr[SIZE];
  char *ptr = resArr;

  int i;
  for (i = 0; *dest != '\0'; i++)

  {
    resArr[i] = *dest++;
  }

  int j = 0;
  for (; j < n && *src != '\0'; j++)
  {
    resArr[i++] = *src++;
  }

  return (ptr);

}
