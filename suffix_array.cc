#include <iostream>
#include <string>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


using namespace std;

#define MAXN 500000

char *suffix_array[MAXN], text[MAXN];

int pstrcmp (const void *x, const void* y) {
    return strcmp(*(char **)x,*(char **)y);
}

int main () {

    int ch, n=0;

    while ((ch = getchar()) != EOF) {
        suffix_array[n] = &text[n];
        text[n++] = ch; 
    }
    text[n] = '\0';

    cout << n << endl;
    cout << text << endl;

    cout << "==== Suffix Array ====" << endl;
    for (int i=0; i < n; i++) {
        printf ("%s\n",suffix_array[i]);
    }

    qsort (suffix_array,n,sizeof(char *),pstrcmp);

    cout << "==== *Sorted* Suffix Array ====" << endl;
    for (int i=0; i < n; i++) {
        printf ("%s\n",suffix_array[i]);
    }



    return 0;
}