#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fil = fopen("/Users/jacob/Desktop/Code_Stuff/Projects/Google Pass 5/test/a.txt", "r");

    int i, i2, i3, i4;
    char password[7];
    char alp[] = "qwertyuiop1234567890asdfghjklzxcvbnm,./;'[]-=\\`~!@#$\%^&*()_+QWEERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";

    fgets(password,7,fil);
    fclose(fil);

    for (i4 = 0; i4 < strlen(alp); i4++)
    {
        char test3[2];
        test3[0] = alp[i4];
        test3[1] = '\0';

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
                    char test[5];
                    test[0] = test3[0];
                    test[1] = test2[0];
                    test[2] = test1[0];
                    test[3] = alp[i2];
                    test[4] = '\0';

                    if (strcmp(test, password) == 0)
                    {
                        printf("password found! %s\n", test);
                        return 0;
                    }
                }
            }
        }
    }
}