#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "work.h"
#include "disp.h"
#include "update.h"
#include "del.h"
//Main Program	
int c=0;

struct employee* head;
struct employee findprev(int);
int main()
{   
	int choice;
	printf("\n                     EMPLOYEE RECORD SYSTEM");
	do{
		printf("\nEnter your choice:\n1.Create\n2.Update\n3.Search\n4.Delete\n5.Display\n6.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create();
			        break;
			case 2:update();
			        break;
			case 3:search();
			        break;
			case 4:del();
			        break;
		    case 6://get(ch);
		        exit(0);
		    case 5:disp();
		           break;
		}
	}
	while(choice<=6);
	return 0;
}





struct employee  findprev(int a)
{ 
}
