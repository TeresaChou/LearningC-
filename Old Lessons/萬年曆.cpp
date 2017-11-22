#include <iostream>
#include <cstdio>

using namespace std;

int calcWeekDay(int year, int month, int day){ //計算星期幾


    int TempYear, TempMonth, i, j;
     if (month >= 3)
     {
         TempMonth = month - 2;
         TempYear = year;
     } else
     {
         TempMonth = month + 10;
         TempYear = year - 1;
     }

     j = TempYear + (int)(TempYear / 4) - (int)(TempYear / 100) +
         (int)(TempYear / 400) + (int)(2.6 * TempMonth - 0.2) + day;

     i = j - 7*(int)(j / 7) + 1;

     return i;
}


void printMonth(int year, int month){
    int i = 0;
    int day = 1;
    //char* weekDayTitle[] = {"禮拜日", "禮拜一", "禮拜二", "禮拜三", "禮拜四", "禮拜五", "禮拜六"};
    char* weekDayTitle[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 !=0))))
    {
        monthDays[2] = 29;
    }

    printf(" 西元 %d 年 %d 月\n", year, month);

    for (i = 0; i < 7; i++){ //印出 Sun Mon.........
        printf("%s ", weekDayTitle[i]);
    }
    printf("\n");

    int weekDay = calcWeekDay(year, month, day);
    int nextLine = 0;
    nextLine = weekDay;
    for (i = 1; i < weekDay; i++){
        printf("    ");
    }

    for (i = 1; i <= monthDays[month]; i++) {
        printf("%3d ", i);
        if (nextLine++ % 7 == 0) printf("\n");
    }
    printf("\n");
}



int main(void){
int year;

cout <<"Please Enter the Year:"<< endl;
cin >> year;

    for (int month = 1; month <= 12; month++){

        printMonth(year, month);
    }
    return 0;
}
