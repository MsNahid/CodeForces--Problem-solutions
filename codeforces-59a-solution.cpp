#include <iostream>
#include <cstdio>
#include <cstring>
#include<bits/stdc++.h>

using namespace std;

#define sz 102

char str[sz + 3];

int main(){

    int i, c, s, len;
    c = s = 0;

    scanf("%s", str);

    for(i = 0; str[i]; i++) ((int)str[i] <= 90)? c++ : s++;

    (c > s)? puts(strupr(str)) : puts(strlwr(str));

    return 0;
}
