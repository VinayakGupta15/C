/*
type - 4 One liner if statement, Switch case 
*/

// One liner if statement
    // (a < 5) ? printf("A is less than 5") : printf("A is not less than 5")
  #include<stdio.h>
  
  int main(){
    int rating;
    printf("Enter the rating about the College(1-5)\n");
    scanf("%d", &rating);
    switch (rating){
        case 1:
        printf("Your rating is Very Bad\n");
        break;
        case 2:
        printf("Your rating is Bad\n");
        break;
        case 3:
        printf("Your rating is Average\n");
        break;
        case 4:
        printf("Your rating is Good\n");
        break;
        case 5:
        printf("Your rating is Very Good\n");
        break;
        default :
        printf("Invalid rating\n");
        break;
    }
         return 0;
  }