#ifndef WORK_H
#define WORK_H
#include<string.h>
//declaration header
struct employee
{

	int id;
	int index;
	float salary;
	char empname[30];
  struct employee *next;
};
extern int c;
extern struct employee * head;
void sort();
void create()
{ ++c;
  struct employee *a=(struct employee*)malloc(sizeof(struct employee));
  struct employee *tmp=(struct employee*)malloc(sizeof(struct employee));
  char empname[30];int ld;float salary;
  printf("\nID:");
  scanf("%d",&ld);
  printf("\nEmployee Salary:");
  scanf("%f",&salary);
  printf("\nEmployee name:");
  scanf("%s",empname);
 if(head==NULL)
 {
 
  head=(struct employee*)malloc(sizeof(struct employee));
  head->id=ld;
  head->salary=salary;
  strcpy(head->empname,empname); 
  head->index=c;
  head->next=NULL; 
}
else
{tmp=head;
 a->id=ld;
 a->salary=salary;
 strcpy(a->empname,empname); 
 a->index=c;
 a->next=NULL;
 while(tmp->next!=NULL)
 {tmp=tmp->next;	
 }	
 tmp->next=a;
}
printf("\nDetails created");
sort();
}
void sort()
{int c,up=1; 
struct employee *a=(struct employee*)malloc(sizeof(struct employee));
struct employee *b=(struct employee*)malloc(sizeof(struct employee));
b=head;
while(b!=NULL)
{   a=b->next;
	while(a!=NULL)
	{
		if((b->id)>(a->id))
		{c=b->id;
		 b->id=a->id;
		 a->id=c;
		}
		a=a->next;
	}
	b=b->next;
        b->index=up++;
}
	
}
#endif
