#include "work.h"
#ifndef DEL_H
#define DEL_H
void del()
{	int w;
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
    {if(a->id==w)
    	{printf("\nElement found at pos %d, deleted",a->index);
    	  if(a->index==1)
    	  head=head->next;
    	  else
    	  {
    	  	b->next=a->next;
		  }
    	 /*b=head;
    	 while(b->next->id!=w)  //not able to put this while to findprev, throwing error
    	 b=b->next;
    	 b->next=a->next;
    	 */
    	 found=1;
    	 break;
		}
		else if(w>(a->id))
		{   first=mid+1;
			break;
		}
		else
		{
		last=mid-1;break;
	}
	}
	b=a;
	a=a->next;
  }
 if(found==1)
 break;	
}
}
#endif
