#include <stdio.h>

int main() {
    char x;
    printf("enter the character:");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("The give Character is vowel");
    }else{
        printf("The given character is not a vowel");
    }

    return 0;
}
