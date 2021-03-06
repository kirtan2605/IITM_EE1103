/**********************************
Purpose : To find out and display the Mean and Standard Deviation of the Columns of a given dataset text
Authors : Kirtan Patel(AE19B038)
Date    : 20/08/2020
Input   : Datafile named 'dataset.txt' present in the same directory as the code file
Output  : Column-wise Mean and Standard Deviation 
************************************/

/***********************************
int main() : primary executed function
const int system(): function called to be able to execute cmd commands
*************************************/

/*********Usage : Compile using 'gcc column_mean_sd.c -o cmsd'*************/
/*****Usage : To get answer , enter "./cmsd" to get the factorial*****/

//Header files and initial declarations
#include <stdio.h>
#include <stdlib.h>	

int main()
{   
	const int system(); //initializing system() function
	system("grep -v '#' dataset.txt|awk 'BEGIN{print \"Coulmn \t Mean \t\t Standard Deviation\" }{for(i=1;i<=NF;i++){sum[i]+=$i;sumsq[i]+=$i*$i}}END{for(i=1;i<=NF;i++){print i,\" \t \" ,sum[i]/NR,\" \t \" ,sd=sqrt((sumsq[i]/NR)-(sum[i]*sum[i])/(NR*NR))}}' ");
	/*
		Algorithm followed in the above awk command
		1.BEGIN : remove all rows which contain '#' in them from dataset.txt
		2.print the first row specifying which printed column contains which values
		3.make 2 arrays for each column(field) to store their Sum and Sum of Squares of column elements
		4.parse the file
		5.END : use formula to calculate Mean,Standard Deviation and print them one by one 
	*/
	return 0;   //return to check proper functioning of the code
}

