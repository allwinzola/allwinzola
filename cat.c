#include <stdio.h> 
#include <string.h> 
#include <stdlib.h>
void prt_fle(const char* nline) 
{ 
    //here my file name is nline
    FILE *file = fopen(nline, "r"); 
    if (file == NULL) { 
        printf("Unable to open file %s\n", nline); 
        return; 
    }
    char ch; 
    while ((ch = fgetc(file)) != EOF) { 
        putchar(ch); 
    } 
    fclose(file); 
} 
int main(int argc, char* argv[]) 
{ 
    FILE* file; 
    char ch; 
    if (argc != 2) { 
        printf("Usage: %s nline\n", argv[0]); 
        return 1; 
    } 
    prt_fle(argv[1]); 
    return 0; 
}
