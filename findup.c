#include "findup.h"

int findup(char c) {

  if (c >= 'A' && c <= 'Z')
    return 1;

  if (c >= 'a' && c <= 'z')
    return 0;

  return 0;

}
