#include <stdio.h>
#include <stdlib.h>

int hesapla(int sayi)
{
    int dizi[100];
    int i,x,sum=0,kalan=0;
    for(i=1;i<=sayi;i++)
    {
        printf("enter %d. student's note\n",i);
        scanf("%d",&x);
        dizi[i-1]=x;
        sum+=x;
    }
    printf("average of the class is: %d\n",(sum/sayi));
    for(i=0;i!=sayi;i++)
    {
        if(dizi[i]<50)
        {
            kalan+=1;
        }
    }
    return kalan;
}
int main()
{
    int osayi,a;
    printf("enter the amount of students.\n");
    scanf("%d",&osayi);
    a=hesapla(osayi);
    printf("the student amount that can't pass is: %d",a);

    return 0;
}
