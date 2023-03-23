#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fil = fopen("/Code/a.txt", "r");

    int i, i2;
    char password[7];
    char alp[] = "qwertyuiop1234567890asdfghjklzxcvbnm,./;'[]-=\\`~!@#$\%^&*()_+QWEERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";

    fgets(password,7,fil);
    fclose(fil);

    for (i = 0; i < strlen(alp); i++)
    {
        char test1[2];
        test1[0] = alp[i];
        test1[1] = '\0';

        for (i2 = 0; i2 < strlen(alp); i2++)
        {
            char test[3];
            test[0] = test1[0];
            test[1] = alp[i2];
            test[2] = '\0';

            if (strcmp(test, password) == 0)
            {
                printf("password found! %s\n", test);
                return 0;
            }
        }
    }
}