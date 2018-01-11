#include<stdio.h>
#include<math.h>
#include<omp.h>
int main() {
double tic = omp_get_wtime();
static int x[4000][4000];
for (int i = 0; i < 4000; i++) {
for (int j = 0; j < 4000; j++) {
x[j][i] = i + j;
}
}
double toc = omp_get_wtime();
double time = toc - tic;
printf("%f\n",time);
double tic1 = omp_get_wtime();
for (int j = 0; j < 4000; j++) {
for (int i = 0; i < 4000; i++) {
x[j][i] = i + j;
}
}
double toc1 = omp_get_wtime();
double time1 = toc1 - tic1;
printf("%f\n",time1);
}
