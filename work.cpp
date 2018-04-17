#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include "work.h"
#include "disp.h"
#include "update.h"
#include "del.h"
//Main Program	
int c=0;
#define WINDOWS 1

void console_clear_screen() {
  #ifdef WINDOWS
  system("cls");
  #endif
  #ifdef LINUX
  system("clear");
  #endif
}
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
				getch();
			        break;
			case 2:update();
				getch();
			        break;
			case 3:search();
				getch();
			        break;
			case 4:del();
				getch();
			        break;
			case 5:disp();
			       getch();
		               break;
			case 6:
		                exit(0);
		    
		}
	}
	while(choice<=6);
	return 0;
}





