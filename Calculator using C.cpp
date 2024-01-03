#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
# define KEY " Enter the operation here : "

void addition();
void subtraction();
void product();
void division();
void power();
int factorial();
void calc_operations();
void modulo_division();

int main()
{
	int x=1;
	char calc_op;
	calc_operations();
	while(x)
    {
        printf("\n");
        printf("%s : ", KEY);
 
        calc_op=getche();
        switch(calc_op)
        {
         	case '+': addition();
         	break;
			 
			 case '-': subtraction();
			 break;	
			 
			 case '*': product();
			 break;		    
					   	   	   	
			
			 case '/': division();
			 break;			   	  
			 
			 case '%' : modulo_division();
			 break;
			 
			 case '^': power();
			 break;
			 
			 case '!': factorial();
			 break;
			 
			 case 's':
			 case 'S' : calc_operations();
			 break;
			 
			 case 'q' :
			 case 'Q' : exit(0);
			 break;
			 
			 case 'c' :
			 case 'C' : system("cls");
			 calc_operations();
			 break;	
			 
			 default : system("cls");
			 printf("-----------------------Option is not available ---------------------------------");
			 printf("-----------------------Please !!!! Input correct command----------------------- ");
			 calc_operations();   	
			 }
		}
	}
	
	void calc_operations()
	{
	 		printf("\n\n");	
	printf("\n ________________Hey! welcome to the calculator_____________________ \n\n\n\n\n\n");
	printf("      please enter the integer type of data \n\n");
	printf("             Enter  S to proceed \n\n ");
	printf("             Enter C to clear the screen       \n\n");
	printf("             The available options are : \n\n");
	printf("\n\n");
	
	printf("Enter + for addition\n ");
	printf("Enter - for subtraction\n");
	printf("Enter * for product\n");
	printf("Enter / for division\n");
	printf(" Enter % for modulo_division\n");
	printf("Enter ! for factorial\n");
	printf("Enter ^ for power\n");
}
 	void addition()
 	{
 		int n,k,sum=0,num;
 		printf(" \n How many  numbers ?\t ");
 			scanf("%d",&n);
 			printf("Enter the numbers : ");
 			for(k=0;k<n;k++)
 			{
 				scanf("%d",&num);
 				sum=sum+num;
		 }
		 printf("The sum of the given numbers is : %d \n",sum);
	}
	void subtraction()
	{
		int b,difference,a;
		printf("\nEnter the first number : \n");
		scanf("%d",&a);
		printf("Enter the second number : \n");
		scanf("%d",&b);
		difference=a-b;
		printf("The difference between given two numbers is : %d\n ",difference);
	}
	void product()
	{
	
	int i,o,mul;
	printf("\nEnter the first number : \n");
	scanf("%d",&i);
	printf("Enter the second number : ");
	scanf("%d",&o);
	mul=i*o;
	printf("The product of given numbers is : %d \n",mul);
}
	void division()
	{
		int d,e,division;
		printf("\nEnter the first number \n: ");
		scanf("%d",&d);
		printf("Enter the second number : ");
		scanf("%d",&e);
		division=d/e;
		printf("The quotient of two numbers is : %d \n",division);
	}
	
	void power()
	{
		int g,h,value;
		printf("\nEnter the base : \n ");
		scanf("%d",&g);
		printf("Enter the exponent :\n ");
		scanf("%d",&h);
		value=pow(g,h);
		printf("The value of the base %d to the power %d is : %d \n",g,h,value);
		
	}
	int factorial()
	{
		int l,m,factorial=1;
		printf(" \nEnter the number to get factorial ");
		scanf("%d",&l);
		if(l<0)
		{
			printf("The factorial is invalid\n\n");
			return 1;
		}
		for(m=l;m>0;m--)
		{
			factorial=factorial*m;
		}
		printf("The factorial of the given number is : %d ",factorial);
	}
	
	void modulo_division()
	{
		int j,k,modulo_division;
		printf("\n\nEnter the first number : ");
		scanf("%d",&j);
		printf("\nEnter the second number : ");
		scanf("%d",&k);
		modulo_division = j%k;
		printf("The modulo_division by diving two given number is : %d\n ",modulo_division);
	}
