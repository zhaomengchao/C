//ÅĞ¶ÏËØÊı
#include <stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   if(1<=n&&n<=10000)
   {
   	for(i=2;i<=n-1;i++)
    	{
   		if(n%i==0)
   		break;
	   }
	   if(i<n)
	   {
	   	printf("This is not a prime.");
	   }
	   else
	   {
	   	printf("This is a prime.");
	   }
   }
   return 0;
}

//Çó½×³Ë
#include <stdio.h>
int main()
{
	
   int i,num,s;
   s=1;
   scanf("%d",&num);
   if(num>=0)
   {
   	 for(i=1;i<=num;i++)
   	 {
   	    s=s*i;	
	 }
   	 printf("%d\n",s);
   } 
   return 0;
}
