#include <stdio.h>

int main() {
    
    /*Week-4-Assignment*/
    
    /*Declaring Variables*/
    int x, left_num, right_num;
    
    /*Taking Input*/
    printf("Enter a two-digit number:  ");
    scanf("%d", &x);
    
    /*Doing Reversal*/
    right_num = x % 10;
    left_num = x / 10;
    
    /*Displaying Reversed Number*/
    printf("The reversal is:  %d%d\n", right_num, left_num);

    return 0;
}