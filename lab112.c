#include <stdlib.h>

#include <stdio.h>

#include <time.h>

#include <math.h>

double sample_interval(double a, double b) {
double x = ((double) rand())/((double) RAND_MAX);
return (b-a)*x + a;



}



double logL(double x1,double x2) { 

  return -(1.-x1)*(1.-x1) -100.*(x2-x1*x1)*(x2-x1*x1);

}



int main (int argc, char **argv) {



  srand(time(NULL));

  int N = atoi( argv[1] ); // convert command-line input to N = number of points



  double x, y;

  double integral = 0;



  for (int i=0; i < N; ++i) {

    x = sample_interval(-5.,5.);

    y = sample_interval(-5.,5.);

    //printf("%lf %lf \n",x,y);

    integral += exp(logL(x,y));



  }





printf("N = %i, z        = %1.6e\n", N, 100.0 * integral/ (double)N );

return 0;



}
