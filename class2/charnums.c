#include<stdio.h>

int main(void) {
    char string_of_nums[] = "3428";  /* 5 characters - 3-4-2-8-null */
    int sum = 0;

    /* print the characters */
    printf("individual characters:\n");
    for (int ii=0;ii<5;ii++) {
        /* Print the character (%c) & ASCII decimal (%d) value of each character */
        printf("  string_of_nums[%d] = %c [%d]\n", ii, string_of_nums[ii], 
                                                   string_of_nums[ii]);
    }


    printf("\nindividual integer values:\n");
    for (int ii=0;ii<4;ii++) {
        /* Print the integer value of each character */
        printf("  string_of_nums[%d] = %d\n", ii, string_of_nums[ii] - '0');
        /* subtracting the character literal '0' from a number character 
         * converts it to its integer equvialent.  For example:
         *     '7' - '0' = 7 since
         *      55 -  48 = 7 ('7' is 55 ASCII, '0' is 48 ASCII)
         */
        sum += string_of_nums[ii] - '0';
    }

    printf("\nThe total sum of the numbers in string_of_nums is %d\n", sum);

    return 0;
}
