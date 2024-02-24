#include <stdio.h>
void main(){
 
 int choice,qty,item;
printf("Welcome to Restaurant");
printf("\n Enter your choice \n 1. Veg \n 2. Nonveg");
scanf("\n %d",& choice);

switch(choice){

case 1:

printf("\n 1. White sauce Pasta \n 2. Raj Kachori\n 3. Baked Samosa\n 4. Butter Khichadi\n 5. Pani Puri\n");
scanf("\n %d",& item);
printf("Your item is %d", item);
switch(item){
    case 1:
    printf("\n You have chosen White sauce pasta\n");
    break ;
    case 2:
    printf("\n You have chosen Raj Kachori\n");
    break ;
    case 3:
    printf("\n You have chosen Baked Samosa\n");
    break ;
    case 4:
    printf("\n You have chosen Butter Khichadi\n");
    break ;
    case 5:
    printf("\n You have chosen Pani Puri\n");
    break ;
    default:
    printf("\nIncorrect choice!");
    
}
printf("Enter Quantity: ");
scanf("\n %d", & qty);
printf("You have Entered %d ", qty);

break;

case 2:

printf("\n 1. Egg curry \n 2. egg noodles\n 3. Chicken\n 4. Mutton\n 5. Omlette");

scanf("\n %d",& item);
printf("Your item is %d", item);
switch(item){
    case 1:
    printf("\n You have chosen Egg curry\n");
    break ;
    case 2:
    printf("\n You have chosen egg noodles\n");
    break ;
    case 3:
    printf("\n You have chosen Chicken\n");
    break ;
    case 4:
    printf("\n You have chosen Mutton\n");
    break ;
    case 5:
    printf("\n You have chosen Omlette\n");
    break ;
    default:
    printf("\nIncorrect choice!");
    
}
printf("Enter Quantity: ");
scanf("\n %d", & qty);
printf("You have Entered %d ", qty);



break;
default:
 printf("\n invalid choice!");
}

return 0;

   
}