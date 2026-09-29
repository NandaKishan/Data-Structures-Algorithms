#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char a[10][10], temp[10];

    printf("\n Enter the N Values");
    scanf("%d", &n);

    printf("Enter the Names one by one :\n");

    for(i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("The Names in Alphabetical Order is =\n");

    for(i = 0; i < n; i++)
    {
        printf("\n%s", a[i]);
    }

    return 0;
}