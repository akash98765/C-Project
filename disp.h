#include "work.h"
#ifndef DISP_H
#define DISP_H
void disp()
{struct employee *a=(struct employee*)malloc(sizeof(struct employee));
a=head;
while(a!=NULL)
{printf("\n%d",a->id);
	a=a->next;
	}	
}
#endif
