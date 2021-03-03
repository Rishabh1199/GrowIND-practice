
#include<stdio.h>
#include<math.h>

int main()
{
    int arr[5],ch,top=-1,temp,i,n=-1;
    ch=0;
    while(ch!=4)
    {
        printf("\n1. push element in the stack");
        printf("\n2. pop the element from the stack");
        printf("\n3. print the stack");
        printf("\n4. exit");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if (top==4){

                    printf("\nstack is full");
            }
                else

                {
                    printf("\nenter the no you want to push:");
                    scanf("%d",&temp);
                    arr[top++]=temp;
                    n++;
                }
                break;
            case 2:
                if(top==-1){
                    printf("\nstack is empty");
                }
                else{
                    printf("\npop element:%d",arr[top]);
                    top--;
                }
                break;
            case 3:
                if(top==-1){
                    printf("\nstack is empty");

                }
                else{
                    printf("printing your stack.....");
                    for(i=-1;i<n;i++)
                        printf("\n             %d",arr[i]);
                }
                break;
            default:
                printf("\nbyeeeee......");
                break;





        }
    }
}
