#include<stdio.h>

int main(void) {
    char string_of_nums[] = "3428";
    int sum = 0;

    /* print the characters */
    printf("individual characters:\n");
    for (int ii=0;ii<5;ii++) {
        /* Print the character & ASCII value of each character */
        printf("  string_of_nums[%d] = %c [%d]\n", ii, string_of_nums[ii], string_of_nums[ii]);
    }


    printf("individual integer values:\n");
    for (int ii=0;ii<4;ii++) {
        /* Print the integer value of each character */
        printf("  string_of_nums[%d] = %d\n", ii, string_of_nums[ii] - '0');
        sum += string_of_nums[ii] - '0';
    }

    printf("\nThe total sum of the numbers in string_of_nums is %d\n", sum);

    return 0;
}
