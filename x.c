#include <stdio.h> 
#include <time.h>
void testFunction() {// Simulate some computing tasks 
volatile long sum = 0; 
for (long i = 0;i< 100000000;i++) 
{sum += i; }
}
int main() {
clock_t start, end; 
start = clock(); 
testFunction();
 end = clock();
double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;// Record start time testFunction();
// Execute the test function // Record end time double time_taken = ((double)(end-start))/CLOCKS_PER_SEC;// 
printf("Time taken for A53/A8: %f seconds\n", time_taken);}



