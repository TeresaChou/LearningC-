#include <iostream>
#include <cstdio>

using namespace std;

int main(){
int i=0;
char* weekDayTitle[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
int days;
int nextLine = 4;

for (i = 0; i < 7; i++){
printf("%4s",weekDayTitle[i]);
}

printf("\n");
 for (i = 1; i < 4; i++){
        printf("    ");
    }

 for (i = 1; i <= 30; i++) {
        printf("%3d ", i);
if (nextLine++ % 7 == 0) printf("\n");
    }

return 0;
}
