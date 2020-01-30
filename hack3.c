
/*
  Programmer's Name: John Cerny
  NUID: 88342998
  Date: 1/30/2020
  Description of the program: A program that tells you the amount of data usage in GB you've used throughout the month
*/

#include <stdio.h>
#include <math.h>

int main (void) {

  double planData, planDay, planUsed;

    // Number of GB in the plan per 30 day period
  printf("What is the number of GB in your plan per 30 day period?\n");
  scanf("%lf", &planData);

    // The current day in the 30 day period (in the range 1, first day, 30 for the last day)
  printf("What day of the month is it? (1 - 30 days)\n");
  scanf("%lf", &planDay);

    // The total number of GB used so far
  printf("What is the total number of GB used so far?\n");
  scanf("%lf", &planUsed);

  double planRemain;
  planRemain = 30 - planDay ;
	
 double averageDailyUsed;
 averageDailyUsed= planUsed/planData;	

  printf("%lf days used, %lf days remaining\n", planDay, planRemain);
  printf("Average Daily Used: %lf /day \n" , averageDailyUsed);


	return 0;
}
