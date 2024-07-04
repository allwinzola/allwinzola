#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
void printrev(char *str, int lgt) 
{
    for (int i = lgt - 1; i >= 0; i--) 
    {
        putchar(str[i]);
    }
}
//here my file name is nline.txt
int main(int argc, char *argv[]) 
{
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int pos[MAX_LINE_LENGTH]; 
    int n_lines = 0;
    if (argc != 2) 
    {
        fprintf(stderr, "Usage: %s nline\n", argv[0]);
        return 1;
    }
    file = fopen(argv[1], "r");
    if (file == NULL) 
    {
        perror("There is an Error opening this file");
        return 1;
    }
    pos[n_lines++] = 0;
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) 
    {
        pos[n_lines++] = ftell(file); 
    }
    for (int i = n_lines - 2; i >= 0; i--) 
    { 
        fseek(file, pos[i], SEEK_SET); /
        if (fgets(line, MAX_LINE_LENGTH, file) != NULL) 
        {
            printrev(line, strlen(line)); 
        }
    }
    fclose(file);
    return 0;
}