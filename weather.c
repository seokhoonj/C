#include <stdio.h>
double averageTemp(double *temps, int numOfTemps) {
	double result = 0.0;
	int i;
	for (i=0; i<numOfTemps; i++) {
		result += temps[i];
	}
	result = result / (double) numOfTemps;
	return result;
}

void printAverageTemp(double *temps, int numOfTemps) {
	double average = averageTemp(temps, numOfTemps);
	printf("Average %d-day temp: %.2lf\n", numOfTemps, average);
}
