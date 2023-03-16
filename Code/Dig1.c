#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fil = fopen("/Users/jacob/Desktop/Code_Stuff/Projects/Google Pass 5/test/a.txt", "r");

    int i, i2;
    char password[7];
    char alp[] = "qwertyuiop1234567890asdfghjklzxcvbnm,./;'[]-=\\`~!@#$\%^&*()_+QWEERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    fgets(password,7,fil);

    fclose(fil);
    for (i2 = 0; i2 < strlen(alp); i2++)
    {
        char test[2];
        test[0] = alp[i2];
        test[1] = '\0';

        if (strcmp(test, password) == 0)
        {
            printf("password found! %s\n", test);
            return 0;
        }
    }
}