#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=0;
    int my_array[i];
    //take nth term.
    printf("Enter n^th number:");
    scanf("%d",&n);
    // store var in array.
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&my_array[i]);
    }
    //Reverse and print var.

    for (int i=n-1; i>= 0; i--)
    {
        printf("%d ",my_array[i]);
    }


    return 0;
}
