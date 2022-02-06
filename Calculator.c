#include <stdio.h>
int main()

{
	int a,b;
	
	float result = 0;
	
	char ch;
	
	printf("Please Inter Your Number \n");
	scanf("%d", &a);
	
	
	printf("Please Inter your second Number \n");
	scanf("%d", &b);
	
	printf("Please Inter Your Operator (+,-,*,/, %) \n");
	
	scanf(" %c", &ch);
	
	switch(ch)
	{
		case '+':
			result = a+b;
			break;
		case '-':
			result = a-b;
			break;
		case '*':
			result = a*b;
			break;
		case '/':
			result = (float)a/(float)b;
			break;
			
		case '%':
			result = a%b;
			
			break;
			
		default:
			printf("Error \n");
	}
	
	printf("The result is %d %c %d = %.0f\n ", a, ch, b, result);
	
	return 0;
}
