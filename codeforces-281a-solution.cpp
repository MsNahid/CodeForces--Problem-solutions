#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define sz 1002

char str[sz + 5];

int main(){

    while(gets(str)){

        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] = str[0] - 32;

        puts(str);
    }

    return 0;
}
