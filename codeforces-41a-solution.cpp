#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 102

char str[sz + 5], str2[sz + 5];

int main(){

    int i, j, len, len2;
    int temp;

    while(gets(str)){

        gets(str2);

        len = strlen(str);
        len2 = strlen(str2);
        //temp = 0;

        if(len != len2){
            puts("NO");
        }else{

            for(i = 0, j = len - 1; str[i]; i++, j--){
                if(str[i] != str2[j]){
                    break;
                }
            }

            if(i == len) puts("YES");
            else puts("NO");

        }

    }

    return 0;
}
