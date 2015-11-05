
#include <stdio.h>
//#include "c-sum.h"//

#define NUM 200

extern void sub_abs_(int *data, int *num, int *out);

int main(int argc, char **argv)
{
    int data[NUM], num, i, out;
    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }
    sum_abs_(data, &num, &out);
    printf("sum=%d\n", out);
    return 0;
}
