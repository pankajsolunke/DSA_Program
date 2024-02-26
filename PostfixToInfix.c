#include<stdio.h>
#include<string.h>
void main(){
	char stk[50][50],p[30],temp[50],opr[10],op1[10],op2[10];
	int top=-1,i = 0;
	printf("\n Enter the postfix expn: ");
	//ab-de+f*/
	scanf("%s",p);
	while(p[i] != '\0'){
		if(p[i] == '+'|| p[i] == '-' || p[i] == '*' || p[i] == '/' || p[i] == '^')
		{
			strcpy(op2,stk[top--]);
			strcpy(op1,stk[top--]);
			opr[0] = p[i];
			opr[1] = '\0';
			strcpy(temp,"(");
			strcat(temp,op1);
			strcat(temp,opr);
			strcat(temp,op2);
			strcat(temp,")");
			strcpy(stk[++top],temp);
			
		}
		else{
			temp[0] = p[i];
			temp[1] = '\0';
			
			strcpy(stk[++top],temp);
		}
		
		i++;
	} 
	printf("\n Infix expn is %s ",stk[top]);
	printf("\n");
}
