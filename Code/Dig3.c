#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fil = fopen("/Users/jacob/Desktop/Code_Stuff/Projects/Google Pass 5/test/a.txt", "r");

    int i, i2, i3;
    char password[7];
    char alp[] = "qwertyuiop1234567890asdfghjklzxcvbnm,./;'[]-=\\`~!@#$\%^&*()_+QWEERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";

    fgets(password,7,fil);
    fclose(fil);
    for (i3 = 0; i3 < strlen(alp); i3++)
    {
        char test2[2];
        test2[0] = alp[i3];
        test2[1] = '\0';

        for (i = 0; i < strlen(alp); i++)
        {
            char test1[2];
            test1[0] = alp[i];
            test1[1] = '\0';

            for (i2 = 0; i2 < strlen(alp); i2++)
            {
                char test[4];
                test[0] = test2[0];
                test[1] = test1[0];
                test[2] = alp[i2];
                test[3] = '\0';

                if (strcmp(test, password) == 0)
                {
                    printf("password found! %s\n", test);
                    return 0;
                }
            }
        }
    }
}