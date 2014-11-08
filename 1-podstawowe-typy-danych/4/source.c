#include <stdio.h>
#include <time.h>

int main (int argc, char const *argv[])
{
  int day, month, year;
  printf("Podaj date urodzin [dd.mm.yyyy]: ");
  scanf("%d.%d.%d", &day, &month, &year);
  //printf("day:%i month:%i year:%i\n", day, month, year);

  struct tm czas;
  time_t cws;

  czas.tm_year = year;
  czas.tm_mon = month;
  czas.tm_mday = day;
  czas.tm_hour = 0;
  czas.tm_min = 0;
  czas.tm_sec = 0;
  czas.tm_isdst = 0;


  cws = mktime(&czas);

  printf("%d\n", time(NULL) - cws);

  return 0;
}
