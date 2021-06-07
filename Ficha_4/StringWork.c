
#include "StringWork.h"

int check_vogal(char t)
{
  if (t == 'a' || t == 'A' || t == 'e' || t == 'E' || t == 'i' || t == 'I' || t =='o' || t=='O' || t == 'u' || t == 'U')
    return 1;

  return 0;
}

int contaVogais (char *s){
    int r = 0;

    for(int i = 0; s[i]; i++)
        if(check_vogal(s[i]))
           r++;  
    
    return r;
}

int retiraVogais (char *s) {
    int length = 0, i, remove = 0;
    for (length = 0; s[length] != 0; length++);

    for (i = 1; i < length; i++) {
        if (check_vogal(s[i-1]) && check_vogal(s[i]) && s[i-1] == s[i]) {
            for (int j = i; j < length; j++) {
                char aux = s[j];
                s[j] = s[j+1];
                s[j-1] = aux;
            }
            remove++;
            length--;
            i--;
        }
    }
    s[i] = '\0';
    return remove;
}

int duplicaVogais (char *s) {
    int i, count = 0;
    for (i = 0; s[i] != 0; i++);

    for (int j = 0; j < i; j++) {
        if (check_vogal(s[j])) {
            char aux = s[j];
            for (int k = i; k > j; k--) {
                s[k] = s[k-1];
            }
            i++;
            s[j] = aux;
            j++;
            count++;
        }
    }
    return count;
}