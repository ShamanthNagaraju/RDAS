#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include "contiki-lib.h"
#include "dev/cooja-radio.h"
#include "sys/node-id.h"
#include "contiki.h"
#include "lib/random.h"
#include "sys/ctimer.h"
#include "sys/etimer.h"
#include "contiki-net.h"
#include "dev/dir.h"
#include <string.h>
 
void oriSet(int * oriVal, int * ori_max,int * f,int beam)
{
  //printf("oriVal=%d    %d\n",oriVal,*oriVal);
  if(*f!=1){
  if (*oriVal<360-beam)
	{
	printf("oriVal=%d     %d\n",*oriVal,beam);
	*oriVal += beam;
	printf("orientation:%d\n",*oriVal);
	ori_set(*oriVal);
	}
    else{
	*f=1;
	ori_set(*ori_max);
	}
    printf("f=%d ori_max: %d\n",*f,*ori_max);
    
  }
}

