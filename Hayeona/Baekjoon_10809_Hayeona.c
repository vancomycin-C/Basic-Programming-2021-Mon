#include <stdio.h>
int main(void)
{
    int n[26];
    char v[101];
    int index;

    scanf_s("%s", v);

    for (int i = 0; i < 26; i++)
    {
        n[i] = -1;
    }
    for (int i = 0; v[i] != '\0'; i++)
    {
        index = v[i] - 97;

        if (n[index] == -1)
        {
            n[index] = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}