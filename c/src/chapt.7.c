#include <stdio.h>
#define ARRSIZE(x) = ((sizeof(x)/sizeof((x)[0])))

//Covers chapter 7 of the beej.us C tutorial

void str(void){
//chapter 7.4

    //this is a pointer to a string literal, and is immutable.
    char *s = "Hello, World!";
    /*
     * s[0] = 'z'; -- this will cause a crash!
     */

    //this is defined as an array, and can therefore be modified positionally.
    char t[] = "Hello, Again!";

    /*
      strings can also be string formatted the same way arrays can, as they are essentially arrays
      of characters.
    */
    for(int i = 0;i<13; i++){
        printf("%c",s[i]);
    }
    t[0] = 'z';

    printf("\n%s\n",t);
}

void str1(void){}

void str2(void){}


int main(void)
{
    int exer;
    printf("enter an exercise number:");
    scanf("%d",&exer);

    switch (exer) {
        default:
            printf("not an exercise");
            break;
        case 0:
            str();
            break;
        case 1:
            str1();
            break;
        case 2:
            str2();
            break;

    }
}
