#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create();
void update();
void search();
void del();
void disp();
void sort();
	
int c=0;
struct employee
{

	int id;
	int index;
  struct employee *next;
};
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
void update()
{int w,newindex;
 int found=0;
 struct employee *a=(struct employee*)malloc(sizeof(struct employee));
 printf("\nEnter the ID number:");
 scanf("%d",&w);
 printf("\nEnter the new index:");
 scanf("%d",&newindex);
 int first=1,last=c,mid;
 
 while(first<=last)
 {a=head;
  mid=(first+last)/2;
  while(a!=NULL)
  {if(a->index==mid)
    {
    	if(a->id==w)
    	{printf("\nElement changed %d",a->index);
    	 a->id=newindex;
    	 found=1;
    	 break;
		}
		else if(w>(a->id))
		{   
			first=mid+1;
			break;
		}
		else
		{
		
		last=mid-1;break;
	}
	}
	a=a->next;
  }
 if(found==1)
 break;	
}	
}
void search()
{int w;
 int found=0;
 struct employee *a=(struct employee*)malloc(sizeof(struct employee));
 printf("\nEnter the ID number:");
 scanf("%d",&w);
 
 int first=1,last=c,mid;
 
 while(first<=last)
 {a=head;
  mid=(first+last)/2;
  while(a!=NULL)
  {if(a->index==mid)
    {
    	if(a->id==w)
    	{printf("\nElement found at pos %d",a->index);
    	 
    	 found=1;
    	 break;
		}
		else if(w>(a->id))
		{   
			first=mid+1;
			break;
		}
		else
		{
		
		last=mid-1;break;
	}
	}
	a=a->next;
  }
 if(found==1)
 break;	
}	
	
}
void del()
{
	int w;
 int found=0;
 struct employee *a=(struct employee*)malloc(sizeof(struct employee));
  struct employee *b=(struct employee*)malloc(sizeof(struct employee));
 printf("\nEnter the ID number:");
 scanf("%d",&w);
 
 int first=1,last=c,mid;
 
 while(first<=last)
 {a=head;
  mid=(first+last)/2;
  while(a!=NULL)
  {if(a->index==mid)
    {
    	if(a->id==w)
    	{printf("\nElement found at pos %d, deleted",a->index);
    	 b=head;
    	 while(b->next->id!=w)  //not able to put this while to findprev, throwing error
    	 b=b->next;
    	 b->next=a->next;
    	 found=1;
    	 break;
		}
		else if(w>(a->id))
		{   
			first=mid+1;
			break;
		}
		else
		{
		
		last=mid-1;break;
	}
	}
	a=a->next;
  }
 if(found==1)
 break;	
}
}
void disp()
{struct employee *a=(struct employee*)malloc(sizeof(struct employee));
a=head;
while(a!=NULL)
{printf("\n%d",a->id);
	a=a->next;
	}	
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
struct employee  findprev(int a)
{ 
}
