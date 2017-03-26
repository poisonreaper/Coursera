
#include <stdio.h>
#include <graphics.h>
#include <stdlib.h>
int main()
{
    int gdriver=DETECT,gmode;
	  initgraph(&gdriver,&gmode,"\tc\bgi");
  int n, c, k, space = 1;

 n=getmaxy()/2;
  space = n - 1;
  int block_size=40;

  for (k =0 ; k <= n; k+=block_size)
  {


    for (c = 0; c <= k; c+=block_size)
    {setfillstyle(SOLID_FILL,rand()%15);
      bar(c,k,c+block_size,k+block_size);
    }


  }
   for (k  ; k <= n; k+=block_size)
  {


    for (c; c >=k; c-=block_size)
    {setfillstyle(SOLID_FILL,rand()%15);
      bar(c,k,c+block_size,k+block_size);
    }


  }
  getch();
  return 0;
}
