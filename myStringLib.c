#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int my_strlen( char *s ){
  int len = 0;
  int i;
  for(i = 0; s[i] != 0; i++){
    len++;
  }
  return(len);
}


char * my_strcpy( char *dest, char *source ) {
  if(dest == NULL){
    return NULL;
  }
  char *output = dest;
  while(*source != '\0'){
    *dest = *source;
    dest++;
    source++;
  }
  *dest = '\0';
  return output;
}


char * my_strncat(char *dest, char *source, int n){
  int lenDest = strlen(dest);
  int destCurrent = lenDest;
  int sourceCurrent = 0;

  while(sourceCurrent < n && source[sourceCurrent] != '\0'){
    dest[lenDest] = source[sourceCurrent];
    lenDest++; sourceCurrent++;
  }

  dest[lenDest] = '\0';
  return dest;
}


int my_strcmp(char *s1, char *s2){
  while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 ){
    s1++;
    s2++;
  }
  if(*s1 == *s2){
    return 0; // strings are identical
  } else{
    return *s1 - *s2;
  }
}

char * my_strchr(char *s, char c){
  while(*s){
    if(*s == c)
      return s;
    else s++;
  }
  return 0;
}
