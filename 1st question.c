#include <stdio.h>

int main()
{
    int list1[5], list2[5], i;
    for(i=0;i<5;i++){
        printf("Enter the number: ");
        scanf("%d",&list1[i]);

    }
    printf("Here is your list1: ");

    for(i=0;i<5;i++)

       printf("%d\n",list1[i]);
    for(i=0;i<5;i++){
        printf("Enter the element of list you want to compare: ");
        scanf("%d",&list2[i]);
    }
    for(i=0;i<5;i++){
        if(list1[i]!=list2[i]){
            printf("false");

        }
        else
            printf("true");
    }



}

