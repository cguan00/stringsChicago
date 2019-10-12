#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "myStringLib.h"

int main(){
  char stringA[100] = "hello";
  printf("testing length of hello: %d\n", my_strlen(stringA));
  printf("testing length of hello with strlen: %ld\n\n", strlen(stringA));

  char stringB[100] = "123456";
  printf("length of 123456: %d\n", my_strlen(stringB));
  printf("length of 123456 with strlen: %ld\n\n", strlen(stringB));

  char string1[100] = "uno";
  char string2[100] = "dos";
  printf("string1: %s\n", string1);
  printf("string2: %s\n", string2);
  printf("copying string1 into string2\n");
  printf("using my_strcpy: %s\n", my_strcpy(string2, string1));
  printf("string1: %s\n", string1);
  printf("string2: %s\n\n", string2);


  char string3[100] = "bat";
  char string4[100] = "bat";
  char string5[100] = "Bat";
  printf("Compare bat and bat with my_strcmp: %d\n", my_strcmp(string3, string4));
  printf("Compare bat and bat with strcmp: %d\n\n", strcmp(string3, string4));

  printf("Compare bat and Bat: %d\n", my_strcmp(string4, string5));
  printf("Compare bat and Bat with my_strcmp: %d\n\n", my_strcmp(string4, string5));


  char string6[100] = "it";
  char string7[100] = "Item";
  printf("Compare it and Item with my_strcmp: %d\n", my_strcmp(string6, string7));
  printf("Compare it and Item with strcmp: %d\n\n", strcmp(string6, string7));


  char string8[100] = "LALA";
  char string9[100] = "lala";
  char string10[100] = "LALA";
  char string11[100] = "lala";
  printf("Concatenate LALA onto lala (4): %s\n", my_strncat(string8, string9, 4));
  printf("Concatenate LALA onto lala (4) using strcat: %s\n\n", strncat(string10, string11, 4));

  char string12[100] = "LALA";
  char string13[100] = "lala";
  char string14[100] = "LALA";
  char string15[100] = "lala";
  printf("Concatenate LALA onto lala (2): %s\n", my_strncat(string12, string13, 2));
  printf("Concatenate LALA onto lala (2) using strcat: %s\n\n", strncat(string14, string15, 2));


  char string16[100] = "ab";
  char string17[100] = "abc";
  printf("Compare ab and abc with my_strcmp: %d\n", my_strcmp(string16, string17));
  printf("Compare ab and abc with strcmp: %d\n\n", strcmp(string16, string17));

  printf("Compare abc and ab with my_strcmp: %d\n", my_strcmp(string17, string16));
  printf("Compare abc and ab with strcmp: %d\n\n", strcmp(string17, string16));

  return 0;
}
