#include<stdio.h>
#include <time.h>

#define TRUE    1
#define FALSE   0
#define KGRN  "\x1B[32m"
#define RED   "\x1B[31m"
#define YEL   "\x1B[33m"
#define RESET "\x1B[0m"

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int today_year = -1, today_month = -1, today_day = -1;

char *months[]=
{
	" ",
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};


int inputyear(void)
{
	int year;

	time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    today_year = tm.tm_year + 1900;
    today_month = tm.tm_mon + 1;
    today_day = tm.tm_mday;
	
	year = today_year;
	printf("Today DD/MM/YYYY: %d/%d/%d\n", today_day, today_month, today_year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;
	
	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	return daycode;
}


int determineleapyear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int year, int daycode)
{
	int month, day;
	for ( month = 1; month <= 12; month++ )
	{
		printf("\n\n%s", months[month]);
		printf("\n-----------------------------------");
		printf("\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		
		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}
		
		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if(month < today_month)
				printf("%s%2d%s", RED, day, RESET );
			else if(month == today_month && day < today_day)
				printf("%s%2d%s", RED, day, RESET );
			else if(today_day == day && today_month == month)
				printf("%s%2d%s", KGRN, day, RESET );
			else
				printf("%s%2d%s", YEL, day, RESET );
			
			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		// Set position for next month
		daycode = ( daycode + days_in_month[month] ) % 7;
	}
}

int main(int argc, char** argv)
{
	int year, daycode, leapyear;

	if(argc > 1)
		year = atoi(argv[1]);	
	else
		year = inputyear();

	printf("CALENDER OF YEAR %d", year);
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
}