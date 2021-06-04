#include<stdio.h>

void print_numbers(int limit);  /* Forward declaration (or prototype) */

int main(void) {
    int num = 40;      /* Integer variable */
    int hexnum = 0x40;   /* Integer variable & hexidecimal literal*/
    double val = 123.456;    /* Floating-point variable */
    char ch = 'A';   /* Character variable */

    int numbers[] = {2, 5, 8, 10, 20};   /* Array of 5 integers */
    int multiples[10];                   /* Array of 10 integers */

    char str[] = "A string";  /* Character array */


    /* for loop */
    for (int ii=0;ii<10;ii++) {
        multiples[ii] = ii * 10;
    }

    /* print variables */
    printf("num: %d %x\n", num, num); /* %d: decimal integer, %x: hex */
    printf("hexnum: %d %x\n", hexnum, hexnum); /* %d: decimal integer, %x: hex */
    printf("val: %.2f\n", val);  /* .2 rounds to 2 decimal places */
   
    /* Char is an integer type */
    printf("ch: %c %d %x\n", ch, ch, ch);
    printf("ch+1: %c %d %x\n", ch+1, ch+1, ch+1);
    printf("'M': %c %d %x\n", 'M', 'M', 'M');


    printf("str: %s\n", str);
    printf("str[3]: %c %d\n", str[3], str[3]);

    /* Print each element of an array */
    printf("\n");
    printf("multiples:\n");
    for (int ii=0;ii<10;ii++) {
        printf("  multiples[%d]=%d\n", ii, multiples[ii]);
    }

    /* Calling a function */
    printf("\n");
    printf("print_numbers:\n");
    printf("  15: ");
    print_numbers(15);
    printf("  %d: ", num/2);
    print_numbers(num/2);
    for(int jj=0;jj<5;jj++) {
        printf("  %d: ", numbers[jj]);
        print_numbers(numbers[jj]);
    }

    return 0;
}

void print_numbers(int limit) {
    for (int xx=1;xx<=limit;xx++) {
        printf("%d ", xx);
    }
    printf("\n");
}
