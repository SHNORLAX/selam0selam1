#include <stdio.h>

void k(void)
{
int x;
*(&x+2) -=31;
static int a=0;
a++;
if (a==2)
*(&x+2) +=57;	

}

int main()
{
int x,y=0;
x=0;
printf("selam %d\n",x++);
k();
x=1;
printf("X=%d\n",x);

return 0;
}



 

