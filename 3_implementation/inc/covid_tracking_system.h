#ifndef __COVID_TRACKING_SYSTEM_H__
#define __COVID_TRACKING_SYSTEM_H__

#include <stdio.h>
#include <stdlib.h>

struct covid_detail
{
	char State_name[100];
	long int total_case;
	long int active_case;
	long int recovered_case;
	long int death_case;
};

struct vaccinated_detail
{
	char State_name[100];
	long long int first_dose;
	long long int second_dose;
};

void covid_details(struct covid_detail s[], int tstate, long int temp_tc, long int temp_ac, long int temp_rc, long int temp_death_case);

void vaccinated_details(struct vaccinated_detail v[], int tstate, long int temp_first_dose, long int temp_second_dose);

void covid_status(struct covid_detail s[], int tstate);

void vaccinated_status(struct vaccinated_detail v[], int tstate);

#endif
