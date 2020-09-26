#include <stdio.h>
#include <math.h>

int main(void) {

float inductor;
int freq1;
int freq2;
int i;

int freqDivisor;
float reactance[10];

printf("what is the start frequency?\n");
scanf("%d",&freq1);

printf("what is the end frequency?\n");
scanf("%d",&freq2);

printf("what is the inductor value\n");
scanf("%f",&inductor);

freqDivisor = (freq2-freq1)/10;
//printf("divisor is %d\n",freqDivisor);

    for (i = freq1; i < freq2; i=i+freqDivisor)
    {
      reactance[i]=2*M_PI*i*inductor;
      printf("Reactance is %3.2f ohms at frequency of %d hertz\n", reactance[i], i);
    }
    return 0;
}