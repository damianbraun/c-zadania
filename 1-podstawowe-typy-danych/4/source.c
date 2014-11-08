#include <stdio.h>
#include <time.h>

int main (int argc, char const *argv[])
{
  int day, month, year;
  printf("Podaj date urodzin [dd.mm.yyyy]: ");
  scanf("%d.%d.%d", &day, &month, &year);

  struct tm czas;
  time_t tod;

  czas.tm_year = year;
  czas.tm_mon = month;
  czas.tm_mday = day;
  czas.tm_hour = 0;
  czas.tm_min = 0;
  czas.tm_sec = 0;
  czas.tm_isdst = 0;

  tod = mktime(&czas);
  //printf("%d\n", tod);

  //time_t currenttime;
  //currenttime = time(NULL);
  //printf("%s%d\n", ctime(&currenttime), time(NULL));

  printf("%d", (int) time(NULL) - (int) tod);

  printf("day:%i month:%i year:%i\n", day, month, year);
  return 0;
}
