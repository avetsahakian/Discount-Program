#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    float price = 10.00;
    char name1[30] = "";
    char name2[30] = "";
    /* const char *name1 = "";
    const char *name2 = ""; */

    printf("Are you a student:(Yes or no)?: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strlen(name1) -1] = '\0';

    printf("Are you a senior:(Yes or no)?: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strlen(name2) -1] = '\0'; 

    if (strcmp(name1, "yes") == 0) {
        if (strcmp(name2, "yes") == 0) {
            if (strcmp(name1,name2) == 0); {
                printf("You get the double discount of 30%%\n");
                price *= 0.7;
                printf("Your total is %.2f$\n", price);
                // printf("You are done\n"); 
                return 0;
        }
    }  
}   

   /*  if (strcmp(name1, "yes") == 1)   
        if(strcmp(name2, "yes") == 1);{
        printf("Right now we dont have any discount for you\n");
        return 1;
    } */

    if (strcmp(name1, "no") == 1){
        printf("You get the student discount of 10%%\n");
        price *= 0.9;
        printf("Your total is %.2f$", price);
        return 1;
    } 

    if (strcmp(name2, "no") == 1){
        printf("You get the senior discount of 20%%\n");
        price *= 0.8;
        printf("Your total is %.2f$", price);
    } 
 
    
   /*  else if (strcmp(name2, "yes") == 1){
        printf("You get the student discount of 10%%\n");
        price *= 0.9;
        printf("Your total is %.2f$", price);
    } */

    else { 
        if (strcmp(name1, "yes") == 0)   
            if(strcmp(name2, "yes") == 0);{
            printf("Right now we dont have any discount for you\n");
            return 0;
    }
    }
}
