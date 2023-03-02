#include <stdio.h>
#include <stdlib.h>

int kitleindex(float height,int weight)
{
    int index,r;
    index =(weight/(height*height));
    if(index<=18)
    {
        r=1;
    }
    else if(index>=19 && index<=25)
    {
        r=2;
    }
    else if(index>=26 && index<=30)
    {
        r=3;
    }
    else if(index>30)
    {
        r=4;
    }
    return r;
}
int main()
{
    float height;
    int weight,a;
    printf("enter your height value.\n");
    scanf("%f",&height);
    printf("enter your weight value. \n");
    scanf("%d",&weight);
    a = kitleindex(height,weight);
    switch(a)
    {
        case 1 : printf("skinny");
        break;

        case 2 : printf("Normal");
        break;

        case 3 : printf("fat");
        break;

        case 4 : printf("Obese");
        break;
    }


    return 0;
}
