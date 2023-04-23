 #include <stdio.h>
 
 
 int main () {
 	int tempc;
 	float tempf;
 	printf("celcius para fahrenheit: ");
 	scanf("%d",&tempc);
 	
 	tempf = (1.8*tempc) + 32;
 	
 	printf("%.1f graus Fahrenheit ",tempf);
 	
 	
 }
