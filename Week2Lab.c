/*
FIRST
#include <stdio.h>
int recursive(int n){
	if(n<=0){
		return 0;
	}
	else{
		return n+recursive(n-1);
	}
	
}
int main(){
	int n;
	printf("Enter your value.\n");
	scanf("%d",&n);
	int sum=recursive(n);
	printf("sum of values:%d",sum);
	return 0;
}
SECOND
#include <stdio.h>
int recursive(int a[],int n){
	int i;
	for(i=0;i<5;i++){	
		for(i=0;i<5;i++){
			if(a[i]>n){
				n=a[i];
				return recursive(a,n);
		}
	}
	return n;
	}
}
int main(){
	int i,a[5],n=0;
	printf("enter your 5 values.\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	} 
	int b=recursive(a,n);
	printf("%d",b);
}

THIRD
#include <stdio.h>
int recursive(int a){
	int r;
	if(a==0){
		return 0;
	}
	else {
		r=a%10;
		a=a/10;
		return r + recursive(a); 
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("sum: %d",recursive(n));
	return 0;
}

FOURTH
#include <stdio.h>
int recursive(int n1,int n2,int i,int b){
	i++;
	if(i>n1 || i>n2){
		return b;
	}  
        if(n1%i==0 && n2%i==0)
       	b=i;
        return recursive(n1,n2,i,b);
}
int main()
{
    int n1,n2,i=0,b=0;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("Largest common divisor:%d",recursive(n1,n2,i,b));
    return 0;
}
