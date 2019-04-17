#include<stdio.h>
void printMaxActivities(int s[], int f[],int n)
{
    int i, j;

    printf ("Following activities are selected n:");
    i = 0;
    printf("%d ", i);

    for (j = 1; j < n; j++)
    {
     if (s[j] >= f[i])
        {
            printf ("%d ", j);
            i = j;
        }
    }
}

int main()
{
    int s[10] ;
    int f[10] ;
    int i,elements;
    printf("elements:");
    scanf("%d",&elements);
    printf("start:");
    for(i=0; i<elements; i++)
    {
        scanf("%d",&s[i]);
    }
    printf("end: ");
    for(i=0; i<elements; i++)
    {
        scanf("%d",&f[i]);
    }

    printMaxActivities(s, f,elements);
    return 0;
}
