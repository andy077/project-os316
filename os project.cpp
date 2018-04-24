#include<stdio.h>
#include<conio.h>
int main()
{
struct student
{
	char name[20];
	int gift;
};
struct student s[20],t;
int i,j,n;

printf("\t\t\t\t ---------Priority Billing Of Students Gifts:---------\n");	

for(i=1;i<=10;i++)
{
	printf("\n Enter the name of student %d: ",i);
	scanf("%s",s[i].name);
	printf("\n Enter the total gifts he's having: ");
	scanf("%d",&s[i].gift);
}

for(i=1;i<=10;i++)
{
	for(j=i+1;j<=10;j++)
	{
		if(s[i].gift<s[j].gift)
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t;
		}
	}
}

printf("\t\t\t\t\t Order of billed students according to highest priority:\n");

for(i=1;i<=10;i++)
{
	printf("\n%d-> Student name is: %s",i,s[i].name);
	printf("\n Total gifts he's having: %d",s[i].gift);
}
getch();

}
