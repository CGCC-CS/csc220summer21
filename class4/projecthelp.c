#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Returning a string from a function */
char * update_string(char * str, int len) {
    char * newstr = malloc (len * sizeof(char));
    for (int ii=0;ii<len;ii++) {
        if (str[ii] == ' ') { newstr[ii] = '_'; }
        else if (str[ii] == 's') { newstr[ii] = '$'; }
        else if (str[ii] == 'a') { newstr[ii] = '@'; }
        else if (str[ii] == 'h') { newstr[ii] = '#'; }
        else { newstr[ii] = str[ii]; }
    }
    return newstr;
}

int main(int argc, char * argv[]) {
    
    char original_string[] = "Test hash";
    char * updated_string;

    /* Command-line arguments */
    printf("There were %d command line arguments:\n", argc);
    for (int ii=0;ii<argc;ii++) {
        printf("  %d: %s\n", ii, argv[ii]);
    }
    printf("\n");

    updated_string = update_string(original_string, strlen(original_string)); 
    printf("\"%s\" changes to \"%s\"\n", original_string, updated_string);
    printf("\"This is yet another test string for update_string\" changes to \"%s\"\n", 
            update_string("This is yet another test string for update_string", 50));
            /* Note that this throws away the value of the pointer - memory leak! */

    return 0;
}