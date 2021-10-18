#include "str_easy.h"

long long itc_len(string str)
{
    long long k=0;
    while(str[k]!='\0')
          k++;
    return k;
}
