#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fil = fopen("/Users/jacob/Desktop/Code_Stuff/Projects/Google Pass 5/test/a.txt", "w");
    char alp[] = "qwertyuiop1234567890asdfghjklzxcvbnm,./;'[]-=\\`~!@#$\%^&*()_+QWEERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    char password[7];
    int i, i2, i3, i4, i5, i6;

    printf("Enter a password less than 6 digits: ");
    scanf("%s", password);

    if (strlen(password) > 6)
    {
        printf("Your password is greater than 6 digits!\n");
        fprintf(fil, "%s", password);
        return 0;
    }
}