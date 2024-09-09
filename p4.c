#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void insertion_sort(long long a[], int n) { 
int i, j; 
long long v; 
for (i = 1; i < n; i++) { 
v = a[i]; 
j = i - 1; 
while (j >= 0 && a[j] > v) { 
a[j + 1] = a[j]; 
j = j - 1; 
} 
a[j + 1] = v; 
} 
printf("Sorted numbers are:\n"); 
for (i = 0; i < n; i++) { 
printf("%lld\n", a[i]); 
} 
} 
int main() { 
clock_t starttime, endtime; 
double clk; 
int i, n; 
printf("Enter the value of n: "); 
scanf("%d", &n); 
// Dynamically allocate memory based on the value of n 
long long *a = (long long *)malloc(n * sizeof(long long)); 
// Initialize random number generator 
srand(time(NULL)); 
for (i = 0; i < n; i++) { 
a[i] = 9000000000LL + (rand() % 1000000000); 
} 
printf("\nPhone Numbers are:\n"); 
for (i = 0; i < n; i++) { 
printf("%lld\n", a[i]); 
} 
starttime = clock(); 
insertion_sort(a, n); 
endtime = clock(); 
clk = (double)(endtime - starttime) / CLOCKS_PER_SEC; 
printf("\nTHE RUN TIME IS: %f seconds\n", clk); 
// Free allocated memory 
free(a); 
return 0;}