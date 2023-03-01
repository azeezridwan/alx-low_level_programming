#ifndef MAIN_H
#define MAIN_H

/*
 * This heaer file contains declarations
 * for prototypes functions defined in the 0x06. C - More pointers, arrays and strings
 * tasks and directory
 * This thing is all about creating my own library
 * the task defines the function
*/

/*enclosing the files content in between ifndef, define & endif
*it stops the file from processing the file twice if ti is included twice
*if not so, this will cause an error
*/

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

#endif
