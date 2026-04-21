


#include <stdio.h>
int main() {
int day;
printf("Enter the day");
scanf("%d",&day); 


switch (day) {
case1: printf("M");
break;
case2: printf("T");
break;
case3: printf("W");
break;
case4: printf("Thru");
break;
case5: printf("F");
break;
default: printf("invalid day");
}
return 0;
}


