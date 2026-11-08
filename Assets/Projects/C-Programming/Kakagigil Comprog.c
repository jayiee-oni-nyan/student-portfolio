#include<stdio.h>

int main(){

int hours,minutes;

printf("\n===============================================\n");
printf("PARKING DURATION FEE");
printf("\n===============================================\n");
printf("\nEnter parking duration (hours): ");
scanf("%d",&hours);
    if(hours>=00 && hours<=24){
            printf("\nEnter parking duration (minutes): ");
            scanf("%d",&minutes);

    if(minutes<00 || minutes>59){}

    }if(hours==24 && minutes==0){
            printf("\n(%d:%d) - OVERNIGHT STAY, fee: 200php\n",hours,minutes);

    }else if(hours>=12 && hours<=24 && minutes>=1 && minutes<=59){
            printf("\n(%d:%d) - OVERNIGHT STAY, fee: 200php\n",hours,minutes);

    }else if(hours==12 && minutes==0){
            printf("\n(%d:%d) - LONG STAY, fee: 120php\n",hours,minutes);

    }else if(hours>=8 && hours<=11 && minutes>=1 && minutes<=59){
            printf("\n(%d:%d) - LONG STAY, fee: 120php\n",hours,minutes);

    }else if(hours==8 && minutes==0){
            printf("\n(%d:%d) - REGULAR STAY, fee: 60php\n",hours,minutes);

    }else if(hours>=4 && hours<=7 && minutes>=1 && minutes<=59){
            printf("\n(%d:%d) - REGULAR STAY, fee: 60php\n",hours,minutes);

    }else if(hours==4 && minutes==0){
            printf("\n(%d:%d) - SHORT STAY, fee: 40php\n",hours,minutes);

    }else if(hours>=1 && hours<=3 && minutes>=1 && minutes<=59){
            printf("\n(%d:%d) - SHORT STAY, fee: 40php\n",hours,minutes);

    }else if(hours==1 && minutes==0){
            printf("\n(%d:%d) - NOT MEANT T0 STAY, fee: 20php\n",hours,minutes);

    }else if(hours==0 && minutes>=1 && minutes<=59){
            printf("\n(%d:%d) - NOT MEANT T0 STAY, fee: 20php\n",hours,minutes);

    }else if(hours==0 && minutes==0){
            printf("\n(%d:%d) - INVALID.\n",hours,minutes);

    }else{printf("\nINVALID.\n");
    }

return 0;
}

