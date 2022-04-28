// INCLUDE THE STANDARD INPUT AND OUTOUT LIBRARY FOR C 
#include<stdio.h> 
 
int main(){ 
	// INITIALISE YOUR VARIABLES 
	float price, gst, amount; 
	 
	// PRINT A PROMPT ON SCREEN TO GET VALUE 
	printf("Enter the bill amount: ");  
	 
	// READ THE AMOUNT FROM USER 
	scanf("%f", &price); 
 
	// PRINT A PROMPT ON SCREEN TO GET GST PERCENTAGE 
	printf("Enter GST amount: "); 
 
	// READ THE GST PERCENTAGE FROM USER 
	scanf("%f", &gst); 
 
	// CALCULATE FINAL AMOUNT BY CONVERTING THE PERCENTAGE TO A FLOAT VALUE AND MULTIPLYING THE PRICE WITH IT 
	amount = price + ((gst/100)*price); 
	 
	// PRINT THE FINAL AMOUNT TO THE USER 
	printf("The amount with GST is %f", amount); 
	 
	// SUCCESSFULLY EXIT PROGRAM 
	return 0; 
} 