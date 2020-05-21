#include <stdio.h>
#include <time.h>
#include <math.h>

/* gcc benchmark.c -lm */

int main(void) {

  int i,j,k,b;
  float d;
  double c;   
  double i2;

  printf("CPU benchmark v1.0");

  time_t seconds1;
  time_t seconds2;

  seconds1 = time(NULL);

  setbuf(stdout, NULL);

  for (k=0;k<10;k++) {

    printf ("\n %d ", k);
    for (i=0;i<10000;i++) {
 
       for (j=0;j<10000;j++) {
            b = i * j;
            d = (float)i / (float)j;
            b = i + j;
            i2 = (double)i;
            c = pow(i2, 3.0);
            
       }

       if  (( i % 1000 ) == 0) {
         printf("-");
       }

       
     }
  }

  seconds2 = time(NULL);
  printf ("\nTime elapsed: %d (sec)\n" ,(int)(seconds2 - seconds1));

}
