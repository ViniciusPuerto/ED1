#include <stdio.h>
#include <string.h>

int main()
{
    int out;
    char c[4];
    out = 0;
    do
    {
        for (int i = 0; i < 9; i++)
        {
            gets(c);
            if (strcmp(c, "sim"))
            {
                out++;
            }
        }
    } while (out!=7);

    return 0;
}