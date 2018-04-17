#include "work.h"
#include <string.h>
#ifndef UPDATE_H
#define UPDATE_H //UPDATE AND SEARCH FUNCTIONS
void update()
{int w,newindex;
 float newsalary;
 char newempname[30];
 int found=0;
 struct employee *a=(struct employee*)malloc(sizeof(struct employee));
 printf("\nEnter the ID number:");
 scanf("%d",&w);
  printf("\nEnter the new Employee Salary:");
 scanf("%f",&newsalary);
  printf("\nEnter the new Employee name:");
 scanf("%s",newempname);
 int first=1,last=c,mid; 
 while(first<=last)
 {a=head;
  mid=(first+last)/2;
  while(a!=NULL)
  {if(a->index==mid)
    {
    	if(a->id==w)
    	{printf("\nElement changed %d",a->index);
	 a->salary=newsalary;
	 strcpy(a->empname,newempname);
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
    {	if(a->id==w)
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
#endif
