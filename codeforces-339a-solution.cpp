#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 100
char str[sz + 5], str2[sz + 5];


void swp(int i, int j){

    char temp;
    temp = str2[i];
    str2[i] = str2[j];
    str2[j] = temp;
}

int main(){

    int i, j, k, len;

    while(gets(str)){

        //strcpy(str2, NULL);

        for(i = 0, j = 0; str[i]; i += 2, j++){
            str2[j] = str[i];
        }
        str2[j] = '\0';
        puts(str2);

        len = strlen(str2);

        for(i = 0; i < len - 1; i++){
            for(j = i + 1; j < len; j++){
                if(str2[i] > str2[j]) swp(i, j);
            }
        }

        puts(str2);

        for(i = 0; str2[i]; i++){
            putchar(str2[i]);

            if(i != len - 1)
                putchar('+');
        }
        /*
        for(i = 0; str[i]; i += 2){
            for(j = i + 2; str[j]; j += 2){
                if(str[i] > str[j]) swp(i, j);
            }
        }
        puts(str);
        */


        putchar('\n');
        //strcpy(str2, NULL);

        memset(str, 0 ,sizeof(str));
        memset(str2, 0 ,sizeof(str2));
    }
    return 0;
}


