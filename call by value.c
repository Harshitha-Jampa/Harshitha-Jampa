#include<stdio.h>
void swap(int ,int);
int main()
{
	int a=10;
	int b=20;
	printf("Before swapping values in main a=%d,b=%d",a,b);
	swap(a,b);
	printf("after swapping values in main a=%d.b=%d",a,b);
}
    void swap(int a,int b)
    {
    	int temp;
    	temp=a;
    	a=b;
    	b=temp;
    	printf("after swapping values in main function a=%d,b=%d",a,b);
	}
