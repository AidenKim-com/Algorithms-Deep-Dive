#include <stdio.h>

int main(void)
{
    int i, j, temp;
    int arr[10] = { 1, 9 , 4, 6, 11, 10, 3, 15, 2, 13 };
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ", arr[i]);
    
    return 0;
}