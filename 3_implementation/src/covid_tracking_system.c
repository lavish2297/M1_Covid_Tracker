#include <covid_tracking_system.h>

void vaccinated_details(struct vaccinated_detail v[], int tstate, long int temp_first_dose, long int temp_second_dose)
{

    v[tstate].first_dose = v[tstate].first_dose + temp_first_dose;
    v[tstate].second_dose = v[tstate].second_dose + temp_second_dose;
}
void covid_details(struct covid_detail s[], int tstate, long int temp_tc, long int temp_ac, long int temp_rc, long int temp_death_case)
{
    s[tstate].active_case = s[tstate].active_case + temp_ac;
    s[tstate].total_case = s[tstate].total_case + temp_tc;
    s[tstate].death_case = s[tstate].death_case + temp_death_case;
    s[tstate].recovered_case = s[tstate].recovered_case + temp_rc;
}

void vaccinated_status(struct vaccinated_detail v[], int tstate)
{
    if (tstate <= 4)
    {
        if (v[tstate].first_dose != 0 && v[tstate].second_dose != 0)
        {
            printf("\n*********** VACCINATED STATUS **************");
            printf("\n|1st dosage total count           | %ld |", v[tstate].first_dose);
            printf("\n=========================");
            printf("\n|2nd dosage total count           | %ld |", v[tstate].second_dose);
            printf("\n=========================");

            printf("\n**********************************************");
        }
        else
            printf("\n------The details of the vaccinated cases yet not be filled------\n");
    }
    else
    {
        printf("\nEnter the valid choice");
    }
}

void covid_status(struct covid_detail s[], int tstate)
{
    if (tstate <= 4)
    {
        if (s[tstate].total_case != 0)
        {
            printf("\n*********** COVID STATUS **************");
            printf("\n|Total Cases              | %ld  |", s[tstate].total_case);
            printf("\n=========================");
            printf("\n|Total Active cases       | %ld  |", s[tstate].active_case);
            printf("\n=========================");
            printf("\n|Total Recovered case     | %ld  |", s[tstate].recovered_case);
            printf("\n=========================");
            printf("\n|Total Death              | %ld  |", s[tstate].death_case);
            printf("\n=========================");

            printf("\n**************************************");
        }
        else
        {
            printf("\n------The details of the covid cases yet not be filled------\n");
        }
    }
    else
    {
        printf("\nEnter the valid choice");
    }
}
