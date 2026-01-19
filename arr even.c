#include <stdio.h>

int main()
 {
    int i, even = 0, odd = 0;
    int arr[6];
    printf("Enter the six elements:\n");

    for (i = 0; i < 6; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++) 
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Total even numbers:%d\nTotal odd number:%d",even,odd);
    return 0;
 }