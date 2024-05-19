#include <stdio.h>

int main(void) {
    FILE * fpl,* fp2;
    char ch;
    fpl = fopen("/home/malinka/CLionProjects/Lab11.1/fname", "r");
    fp2 = fopen("/home/malinka/CLionProjects/Lab11.1/lname", "w");
    ch = getc (fpl) ;
    fprintf( fp2, "%c\n", ch);
    putc (ch , fp2) ;
    fclose(fp2);
    return 0;
}
