#ifndef WORK_H
#define WORK_H
struct employee
{

	int id;
	int index;
  struct employee *next;
};
extern int c;
extern struct employee * head;
void sort();
void create()
{ ++c;
  struct employee *a=(struct employee*)malloc(sizeof(struct employee));
  struct employee *tmp=(struct employee*)malloc(sizeof(struct employee));
  char n[30];int ld;
  printf("\nID:");
  scanf("%d",&ld);
 if(head==NULL)
 {
 
  head=(struct employee*)malloc(sizeof(struct employee));
  head->id=ld;
  head->index=c;
  head->next=NULL; 
}
else
{tmp=head;
 a->id=ld;
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
{int c; 
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
}
	
}
#endif
