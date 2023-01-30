#include <stdio.h>
#include <stdlib.h>

int q[10],f=-1,r=-1;
void insertion(int x)
{
    //queue full?
    if(((r==9)&&(f=0))||(r==(f-1)))
        printf("\nQueue full");
    else
    {
        r=(r+1)%10;
        q[r]=x;
        if(f==-1)
            f=0;

    }
}
void deletion()
{
    //queue empty
    if (f==-1)
        printf("Queue empty");
    else
    {
        //Only one element
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f=(f+1)%10;

    }
}
void display()
{
    int i;
    if(f<=r)
    {
        for(i=f;i<=r;i++)
            printf("%d",q[i]);

    }
else
{
    for(i=f;i<=9;i++)
        printf("%d",q[i]);
    for(i=0;i<=r;i++)
        printf("%d",q[i]);
}
}
int main()
{
    int x,ch;
    while(1)
    {

    printf("\n 1.Insertion \n 2.Deletion \n 3.Display \n 4.Exit\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("\nEnter the element to be inserted");
        scanf("%d",&x);
        insertion(x);
        break;
        case 2:deletion();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        default:printf("\nWrong choice");

    }}
}
