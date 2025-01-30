#include <stdbool.h>
#include <string.h>
#include <stdio.h>
    //it works ( ͡❛ ω ͡❛)
    char isPalindrome[20];
    char ReversPalindrome[20];
    int s;
    int main()
    {
        printf(" please enter a word : ");
        scanf("%s", isPalindrome);
        strcpy(ReversPalindrome, isPalindrome); // copy the info we got in one into the over
        puts(ReversPalindrome);
        puts(isPalindrome);
        strrev(ReversPalindrome); // reverse the word
        puts(ReversPalindrome);
        s = strcmp(isPalindrome,ReversPalindrome);
         if (s == 0)
        //if ((strcmp(isPalindrome, ReversPalindrome)) == 0 ) // if it's equal to 0, it's a palidrome but if it isn't...welp it's not one
            {
            printf(" c'est mon code");
            }
        else
            {
            printf(" get out");
            }
        

    }


