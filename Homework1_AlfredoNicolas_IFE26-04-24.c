#include<stdio.h>
////1
//int main(){
//	printf ("%6d, %4d\n", 86, 1040);
//	printf ("%12.5e\n", 30.253);
//	printf ("%.4f\n", 83.162);
//	printf ("%-6.2g\n",.0000009979);
//return 0;
//}
//2
int main(){
	int i, j;
	float x;
	printf("Enter a int: ");
	scanf ("%d", &i);
	printf("Enter another int: ");
	scanf ("%d", &j);
	printf("enter a float: ");
	scanf ("%f", &x);
	
	printf("i = %d  j = %d x = %f" ,i,j,x);
	return 0;
}

//3
//#include <stdio.h>
//
//int main() {
//    float celsius, fahrenheit;
//
//
//    printf("Enter temperature in Celsius: ");
//    scanf("%f", &celsius);
//
//
//    fahrenheit = (celsius * 9/5) + 32;
//
//    
//    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
//
//    return 0;
//}


//este es el ultimo
//#include <stdio.h>
//
//int main(void){
//
//
//	int height, length, width, volume, weight;
//	
//	printf("Enter height of box: ");
//	
//	scanf("%d", &height);
//	
//	printf("Enter length of box: ");
//	
//	scanf("%d", &length); printf("Enter width of box: ");
//	
//	scanf("%d", &width);
//	
//	volume = height *length *width;
//	weight = (volume + 165) /166;
//	
//	printf("Volume (cubic inches): %d\n", volume); printf("Dimensional weight (pounds): %d\n", weight);
//
//return 0;
//}


// este es el penultimo

//#include <stdio.h>
//
//int main() {
//    // Table headers
//    printf("%-10s%-10s%-8s%-8s\n", "Month", "Estimated", "Real", "Balance");
//    
//    // Table data
//    printf("%-10s%-10d%-8d%-8d\n", "March", 48000, 52000, -4000);
//    printf("%-10s%-10d%-8d%-8d\n", "June", 70000, 58000, 12000);
//    printf("%-10s%-10d%-8d%-8d\n", "Sept", 52000, 56000, -4000);
//    printf("%-10s%-10d%-8d%-8d\n", "Dece", 50000, 48000, 2000);
//
//    return 0;
//}
//	

