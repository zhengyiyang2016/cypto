#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char word[6][6][6]={0};
char add[32]={0};
char redirect[150]={0};
char pas[64]={0};
int main(int argc, char** argv) {
	return 0;
}
void rchange()
{
	int i,k,s;
	for(i=1;i<=5;i++)
    {  
	for(k=1;k<=5;k++)
    {  
	if(k % 2==0)
	{
	switchn(1,k,i,5,k,i);
	switchn(2,k,i,3,k,i);
	switchn(4,k,i,3,k,i);
	}else
	{
    switchn(2,k,i,5,k,i);
	switchn(3,k,i,4,k,i);
	switchn(3,k,i,1,k,i);
	}
	
	
	}
	
	}
}
void lchange()
{
	int i,k,s;
	for(i=1;i<=5;i++)
    {  
	for(k=1;k<=5;k++)
    {  
	if(k % 2==0)
	{
	switchn(k,1,i,k,5,i);
	switchn(k,2,i,k,3,i);
	switchn(k,4,i,k,1,i);
	}else
	{
    switchn(2,k,i,k,5,i);
	switchn(3,k,i,k,4,i);
	switchn(3,k,i,k,1,i);
	}
	
	
	}
	
	}
}
void switchn(int a,int b,int c,int d,int e,int f)
{
	int t=0;
	t=word[a][b][c];
	word[a][b][c]=word[d][e][f];
	word[d][e][f]=t;
}
void depchange()
{
	int i,k,s;
	for(i=1;i<=5;i++)
    {  
	for(k=1;k<=5;k++)
    {  
	if(k % 2==0)
	{
	switchn(i,k,1,i,k,5);
	switchn(i,k,2,i,k,3);
	switchn(i,k,4,i,k,3);
	}else
	{
    switchn(i,k,2,i,k,5);
	switchn(i,k,3,i,k,4);
	switchn(i,k,3,i,k,1);
	}
	
	
	}
	
	}
}
void add(int turn)

{
	int i,k,j;
	for(i=1;i<=5;i++)
    {  
	for(k=1;k<=5;k++)
    {  
	for(j=1;j<=5;j++)
    {  
    word[i][k][i]=redirect[i*k*j+add[turn]];
	
	
	}
	
	}
}
}
void exchange(int turn)
{
	int i,k,j;
	for(i=1;i<=5;i++)
    {  
	for(k=1;k<=5;k++)
    {  
	for(j=1;j<=5;j++)
    {  
   if(turn % 2==0)
   {
   	 word[i][k][i]= word[i][k][i]^pas[turn];
   }
	
	
	}
	
	}
}	
	
}
