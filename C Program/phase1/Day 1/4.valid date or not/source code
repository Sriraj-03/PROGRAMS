#include <stdio.h>

int main() {
    int day, month, year;
    scanf("%d/%d/%d",&day,&month,&year);
    int valid=1; 
    if(day<1||day>31){
        valid=0;
    }
    if(month<1||month>12) {
        valid=0;
    }
    if(month==2){
        if(year%4==0&&(year%100!=0||year%400==0)){
            if (day<1||day>29) {
                valid=0;
            }
        }
        else{
            if(day<1||day>28){
                valid =0;
            }
        }
    }
    if(month==4||month==6||month==9||month==11){
        if (day<1||day>30) {
            valid=0;
        }
    }
    if(year<1) {
        valid=0;
    }
    
    if (valid) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}