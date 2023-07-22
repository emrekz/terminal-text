#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <ctype.h>
#include "constant.h"

uint8_t userWord[CHARACTER_LIMIT];
char alphabet[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','-'};
uint8_t charOrder[CHARACTER_LIMIT];
uint8_t charPatternStorage[CHARACTER_LIMIT][8][8];
uint8_t charCount = 0;

char *checkWordChars(uint8_t *userWord, uint8_t userWordSize);
void printCharPattern(uint8_t *getCharOrder, uint8_t userWordSize);

int main() {
  uint8_t userWordSize = sizeof(userWord)/sizeof(userWord[0]);
  printf("Character limit size: %d\nUse '-' character for space (Ex:hello-world)\nLET'S TYPE SOMETHING ! : ", userWordSize);
  scanf("%s", userWord);
  uint8_t *getCharOrder = checkWordChars(userWord, userWordSize);
  printCharPattern(getCharOrder, userWordSize);
  return 0;
}

char *checkWordChars(uint8_t *userWord, uint8_t userWordSize) {
  for(uint8_t i=0;i<userWordSize;i++){
    for(uint8_t n=0;n<27;n++){
      if(isalpha(*(userWord+i))){
        if(toupper(*(userWord+i))==alphabet[n]){
          charOrder[i] = n;
          charCount++;
          break;
        } 
      } 
      else if(*(userWord+i) == '-') {
        charOrder[i] = 26;
        charCount++;
        break;
      }
    }
  }
  return charOrder;
}

void printCharPattern(uint8_t *getCharOrder, uint8_t userWordSize){
  char x[8][userWordSize][8];
  uint8_t power;
  for(uint8_t t=0;t<8;t++){
    for(uint8_t n=0;n<charCount;n++){
      for(uint8_t i=0;i<8;i++){
        power = (uint8_t)pow(2,(double)i);
        x[t][n][i] = charArr[*(getCharOrder+n)][t] & power ? PATTERN_CHAR : ' ';
      }
    }
  }
  if(charCount>0) {
    for(uint8_t t=0;t<8;t++){
      for(uint8_t n=0;n<charCount;n++){
        for(int8_t i=7;i>=0;i--){
          printf("%c", x[t][n][i]);
        }
        printf(" ");
      }
      printf("\n");
    }
    printf("\n");
  }
}