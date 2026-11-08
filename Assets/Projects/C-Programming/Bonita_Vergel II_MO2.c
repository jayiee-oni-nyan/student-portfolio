#include<stdio.h>

int main(){

int tot_dist,tot_travtm,fueleff,no_packdel;      //int variables
float fuel_prL,driver_payH,add_delex;            // float variables

printf("\n==================================================\n");
printf("KINDLY FILL IN THE REQUIREMENTS\n");     //below are the inputs
printf("==================================================\n");
printf("Enter total distance (km): ");
scanf("%d",&tot_dist);
printf("\nEnter total travel time (minutes): ");
scanf("%d",&tot_travtm);
printf("\nEnter fuel efficiency(km/L): ");
scanf("%d",&fueleff);
printf("\nEnter fuel price per liter (php): ");
scanf("%f",&fuel_prL);
printf("\nEnter number of packages: ");
scanf("%d",&no_packdel);
printf("\nEnter driver payment per hour: ");
scanf("%f",&driver_payH);
printf("\nEnter additional expenses: ");
scanf("%f",&add_delex);
                                                  //below are the required processes
float fuelcons = (float)tot_dist/fueleff;
float fuelcost = fuelcons*fuel_prL;
float travtH = (float)tot_travtm/60;
float driv_payment = travtH*driver_payH;
float tot_delivC = fuelcost+driv_payment+add_delex;
float cost_pPack = tot_delivC/no_packdel;
float av_speed = (float)tot_dist/travtH;

printf("\n==================================================\n");
printf("DELIVERY TRIP REPORT\n");                 //below are the outputs
printf("==================================================\n");
printf("Total Distance          : %d ",tot_dist);
printf("\nTravel Time             : %.2f ",travtH);
printf("\nFuel Consumed           : %.2f ",fuelcons);
printf("\nFuel Cost               : %.2f ",fuelcost);
printf("\nDriver Payment          : %.2f ",driv_payment);
printf("\nAdditional Expenses     : %.2f \n",add_delex);
printf("--------------------------------------------------\n");
printf("Total Delivery Cost     : %.2f ",tot_delivC);
printf("\nCost per Package        : %.2f ",cost_pPack);
printf("\nAveraege Speed          : %.2f \n",av_speed);
printf("==================================================\n");

return 0;
}
