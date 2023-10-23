#include <stdbool.h>
#include <stdio.h>

/* Declare arrays to store the shoe IDs, inventory, rented shoes, lost shoes, rented shoes 
 counter, lost shoes counter and initialize variables.*/

int rent_small(), rent_medium(), rent_large();

//Available shoe types arrays and sizes.
int small_shoes[30];
int medium_shoes[20];
int large_shoes[25];

//Available shoes inventory with IDs ranging from 1001 - 1030, 2001 - 2020 and 3001 - 3025.
int smallshoe_inventory[30] = {1001, 1002, 1003, 1004, 1005, 
                              1006, 1007, 1008, 1009, 1010, 
                              1011, 1012, 1013, 1014, 1015, 
                              1016, 1017, 1018, 1019, 1020, 
                              1021, 1022, 1023, 1024, 1025, 
                              1026, 1027, 1028, 1029, 1030};

int mediumshoe_inventory[20] = {2001, 2002, 2003, 2004, 
                                2005, 2006, 2007, 2008, 
                                2009, 2010, 2011, 2012, 
                                2013, 2014, 2015, 2016, 
                                2017, 2018, 2019, 2020};

int largeshoe_inventory[25] = {3001, 3002, 3003, 3004, 3005,
                               3006, 3007, 3008, 3009, 3010,
                               3011, 3012, 3013, 3014, 3015,
                               3016, 3017, 3018, 3019, 3020,
                               3021, 3022, 3023, 3024, 3025};

 // Rented shoes arrays to track rented shoes
int rented_small[30] = {0};
int rented_medium[20] = {0};
int rented_large[25] = {0};

int notrented_small = {0};
int notrented_medium = {0};
int notrented_large = {0};

//Lost shoes arrays to track lost shoes
int small_lost[30] = {0};
int medium_lost[20] = {0};
int large_lost[25] = {0};

//Rented shoes counter arrays.
int rented_small_counter = 0;
int rented_medium_counter = 0;
int rented_large_counter = 0;

int notrented_small_counter = 0;
int notrented_medium_counter = 0;
int notrented_large_counter = 0;

//Lost shoe counter arrays
int lost_small_counter = 0;
int lost_medium_counter = 0;
int lost_large_counter = 0;

  // Initialize the shoe IDs in the shoes array
void initialize_shoes() {
  // For small shoes.
  for (int i = 0; i < 30; i++) {
    small_shoes[i] = 1001 + i;
  }
  // For medium shoes.
  for (int i = 0; i < 20; i++) {
    medium_shoes[i] = 2001 + i;
  }
  // For large shoes.
  for (int i = 0; i < 25; i++) {
    large_shoes[i] = 3001 + i;
  }
}


 /* Case 1: To display the shoe inventory for small, medium and large shoe arrays and 
  their stored IDs.*/

void shoe_inventory() {
  
int printShoeInventory(int small_shoes, int medium_shoes, int large_shoes);

     
  // For Small shoes inventory.

  printf("\nSHOW ALL SHOES AVAILABLE BEFORE RENT: \n");
  printf("\n===== ===== ===== ===== ===== ======= \n");
  printf("\nAvailable small shoes before rent:\n\n");
  for (int i = 0; i < 30; i++) {
    if (smallshoe_inventory[i] != 0) {
      printf("%d ", smallshoe_inventory[i]);
    }
  }
  

  // For medium shoes inventory.
  printf("\n\nAvailable medium shoes before rent:\n\n");
  for (int i = 0; i < 20; i++) {
    if (mediumshoe_inventory[i] != 0) {
    printf("%d ", mediumshoe_inventory[i]);
  }
  }


  // For large shoes inventory.
  printf("\n\nAvailable large shoes before rent:\n\n");
  for (int i = 0; i < 25; i++) {
    if (largeshoe_inventory[i] != 0) {
    printf("%d ", largeshoe_inventory[i]);    
  }
}
  printf("\n===== ===== ===== ===== ===== ======= \n");
}


  /* Case 2:  To rent a shoe by marking it as rented in the rented array with index value 
     of 1 for valid shoe ID and 0 for invalid shoe ID.*/
void rent_shoe() {
int shoe_id;
  printf("Enter shoe ID to rent: ");
  scanf("%d", &shoe_id);

  // Verify if the entered shoe ID is valid for SMALL shoe.
  if (shoe_id >= 1001 && shoe_id <= 1030) {
    int index = shoe_id - 1001;

    // Verify if the small shoe is not already rented.
    if (!rented_small[index]) {
      rented_small[index] = 1;
      rented_small_counter++;
      notrented_small_counter++;
printf("Small shoe %d rented successfully.\nPlease pay a deposit of £5 with thanks.\n", shoe_id);
    } else {
      printf("Small shoe %d is already rented.\n", shoe_id);
   }
  }
    // Verify if the entered shoe ID is valid for MEDIUM shoe.
   else if (shoe_id >= 2001 && shoe_id <= 2020) {
int index = shoe_id - 2001;

    // Verify if the  medium shoe is not already rented.
    if (!rented_medium[index]) {
      rented_medium[index] = 1;
      rented_medium_counter++;
      notrented_medium_counter++;
      
printf("Medium shoe %d rented successfully.\nPlease pay a deposit of £5 with thanks.\n", shoe_id);
    } else {
      printf("Medium shoe %d is already rented.\n", shoe_id);
    }
  }

  

  //Verify if the entered shoe ID is valid for LARGE shoe.
  else if (shoe_id >= 3001 && shoe_id <= 3025) {
int index = shoe_id - 3001;

    // Verify if the large shoe is not already rented.
    if (!rented_large[index]) {
      rented_large[index] = 1;
      rented_large_counter++;
      notrented_large_counter++; 
printf("Large shoe %d rented successfully.\nPlease pay a deposit of £5 with thanks.\n", shoe_id);
    } else {
      printf("Large shoe %d is already rented.\n", shoe_id);
    }
    } else {
    printf("Invalid shoe ID.\n");
  }


   //Verify if rented small shoe is removed from available shoes.
   // Initialize shoe IDs in the shoe arrays.
int smallshoe_inventory[30];
int size = 30;  
     for (int i = 0; i < 30; i++) {
    smallshoe_inventory[i] = 1001 + i;
  }
int mediumshoe_inventory[20];
int msize = 20;  
    for (int i = 0; i < 20; i++) {
    mediumshoe_inventory[i] = 2001 + i;
  }

int large_shoes[25];
int lsize = 25;  
    for (int i = 0; i < 25; i++) {
    largeshoe_inventory[i] = 3001 + i;
  }
int delete = 0;
  
  //Display Inventory after rent.
     printf("\nSHOW SHOE INVENTORY AFTER RENT: \n");
     printf("\nEnter rented shoe ID to update shoe inventory: \n");
     scanf("%d", &delete);
     printf("\n\nsmallshoe_inventory after rent:\n");
int i = 0;
  while (i < size)
    {
    if (smallshoe_inventory[i] == delete)
      {
    if (i < (size - 1))
      for (int j = i; j < (size - 1); j++)
          smallshoe_inventory[j] = smallshoe_inventory[j+1];
        size--;
      }
      else i++;
      
    }
    // show the default available small shoes.
     printf("\n");
  for (int i = 0; i < size; i++)
     printf("%d ", smallshoe_inventory[i]);
     printf("\n\n");
  {
    //Verify if rented medium shoe is removed from available shoes
     printf("\n\nmediumshoe_inventory after rent:\n");
int i = 0;
    while (i < msize)
      {
    if (mediumshoe_inventory[i] == delete)
      {
    if (i < (msize - 1))
      for (int j = i; j < (msize - 1); j++)
          mediumshoe_inventory[j] = mediumshoe_inventory[j+1];
        msize--;
      }
      else i++;
      
    }
    // show the default available medium shoes.
     printf("\n");
  for (int i = 0; i < msize; i++)
     printf("%d ", mediumshoe_inventory[i]);
     printf("\n\n");
  }
  {
    //Verify if rented large shoe is removed from available shoes
     printf("\n\nlargeshoe_inventory after rent:\n");
int i = 0;
    while (i < lsize)
    {
    if (largeshoe_inventory[i] == delete)
      {
    if (i < (lsize - 1))
      for (int j = i; j < (lsize - 1); j++)
          largeshoe_inventory[j] = largeshoe_inventory[j+1];
        lsize--;
      }
      else i++;
      
    }
    // show the default available large shoes.
     printf("\n");
  for (int i = 0; i < lsize; i++)
     printf("%d ", largeshoe_inventory[i]);
     printf("\n\n");
  }
}
  /*Case 3: To return a rented shoe by marking it as returned and not rented in the 
   rented array with index value of 1 for valid shoe ID and 0 for invalid shoe ID.*/
void return_shoe() {
int shoe_id;
  printf("Enter shoe ID to return: ");
  scanf("%d", &shoe_id);

  // Verify if the entered shoe ID is valid for SMALL shoe.
  if (shoe_id >= 1001 && shoe_id <= 1030) {
int index = shoe_id - 1001;

    // Verify if the small shoe is currently returned.
    if (rented_small[index]) {
      rented_small[index] = 0;
  printf("Small shoe %d returned successfully.\nYour £5 deposit has been refunded, please do come again!\n", shoe_id);
    } else {
      printf("Small shoe %d was not rented\n", shoe_id);
    }

  }

    // Verify if the entered shoe ID is valid for MEDIUM  shoe.
  else if (shoe_id >= 2001 && shoe_id <= 2020) {
int index = shoe_id - 2001;

    // Verify if the medium shoe is currently returned.
    if (rented_medium[index]) {
      rented_medium[index] = 0;
printf("Medium shoe %d returned successfully.\nYour £5 deposit has been refunded, please do come again!", shoe_id);
    } else {
      printf("Medium shoe %d was not rented.\n", shoe_id);
    }

  }

    
     // Verify if the entered shoe ID is valid for LARGE shoe.
  else if (shoe_id >= 3001 && shoe_id <= 3025) {
int index = shoe_id - 3001;

    // Verify if the  large shoe is currently returned.
    if (rented_large[index]) {
      rented_large[index] = 0;
printf("Large shoe %d returned successfully.\nYour £5 deposit has been refunded,  please do come again!", shoe_id);
    } else {
      printf("Large shoe %d was not rented.\n", shoe_id);
    }
    } else {
    printf("Invalid shoe ID.\n");
    }

}

 /*Case 4: To report a lost shoe by marking it as lost in the lost array with index value 
  of 1 for valid shoe ID and 0 for invalid shoe ID.*/
void report_lost() {
int shoe_id;
  printf("Enter lost shoe ID: ");
  scanf("%d", &shoe_id);

  // Verify if the entered shoe ID is valid for SMALL shoe.
  if (shoe_id >= 1001 && shoe_id <= 1030) {
int index = shoe_id - 1001;

    // Verify if the small shoe is not already reported as lost.
    if (!small_lost[index]) {
      small_lost[index] = 1;
      lost_small_counter++;
printf("Small shoe %d reported as lost.\nSorry we will not be able to refund the £5 deposit.\n ", shoe_id);
    } else {
      printf("Small shoe %d was already reported as lost.\n", shoe_id);
    }
  }
    
  // Verify if the entered shoe ID is valid for MEDIUM shoe.
  else if (shoe_id >= 2001 && shoe_id <= 2020) {
int index = shoe_id - 2001;

    // Verify if the medium shoe is not already reported as lost.
    if (!medium_lost[index]) {
      medium_lost[index] = 1;
      lost_medium_counter++;
printf("Medium shoe %d reported as lost.\nSorry we will not be able to refund the £5 deposit.\n", shoe_id);
    } else {
      printf("Medium shoe %d was already reported as lost.\n", shoe_id);
    }

  }
  // Verify if the entered shoe ID is valid for LARGE shoe.
  else if (shoe_id >= 3001 && shoe_id <= 3025) {
int index = shoe_id - 3001;

    // Verify if the large shoe is not already reported as lost.
    if (!large_lost[index]) {
      large_lost[index] = 1;
      lost_large_counter++;
printf("Large shoe %d reported as lost.\nSorry we will not be able to refund the £5 deposit.\n", shoe_id);
    } else {
      printf("Large shoe %d was already reported as lost.\n", shoe_id);
    }
  } else {
    printf("Invalid shoe ID.\n");
  }
}

   /*Case 5: To view statistics of total rental report, rented figures,lost figures and 
    their  respective IDs.*/
void view_statistics() {
int rented_count = 0, notrented_count = 0, lost_count = 0, rented_counter, lost_counter, notrented_counter; 

  // Counting rented shoes
  // For counting rented small shoes.
  for (int i = 0; i < 30; i++) {
    if (rented_small[i])
      rented_count++;
  }
  
  // For counting rented medium shoes.
  for (int i = 0; i < 20; i++) {
    if (rented_medium[i])
      rented_count++;
  }
  
  // For counting rented large shoes.
  for (int i = 0; i < 25; i++) {
    if (rented_large[i])
      rented_count++;
  }

  
  // Counting lost shoes
  // For counting lost small shoes.
  for (int i = 0; i < 30; i++) {
    if (small_lost[i])
      lost_count++;
  }
  

  // For counting lost medium shoes.
  for (int i = 0; i < 20; i++) {
    if (medium_lost[i])
      lost_count++;
  }

  
  // For counting lost large shoes.
  for (int i = 0; i < 25; i++) {
    if (large_lost[i])
      lost_count++;
  }


  // Display statistics reports.
  printf("\n\n==== STATISTICS REPORT ====\n");
  printf("SHOE SIZES:  small\t medium\tlarge\t\n");
  printf("TOTAL Shoes:  %d,\t %d\t\t, %d\n", 30, 20, 25);

  printf("\n---- RENTAL REPORT ----\n");
  
  printf("\nRENTED shoes: %d\n", rented_count);
  printf("\nRENTED COUNTER\n");
  printf("small\t medium\t\tlarge\t");
  printf("\n\t%d\t \t%d\t\t %d\n\n", rented_small_counter, rented_medium_counter,
         rented_large_counter);

  // Statistics report to display serial numbers of rented small shoes.

  int notrented_small_counter = 30 - rented_small_counter;
  
  printf("\nTotal small_shoes: %d\n", 30);
  printf("Rented small shoes: %d\n", rented_small_counter);
  printf("Notrented small shoes: %d", notrented_small_counter);
  printf("\nRented small_shoe IDs: ");
  for (int i = 0; i < 30; i++) {
    if (rented_small[i]) {
      printf("%d ", small_shoes[i]);
      
      
    
    }
  }
  
  
  // Statistics report to display serial numbers of medium rented shoes.
  int notrented_medium_counter = 20 - rented_medium_counter;

  printf("\n\nTotal medium_shoes: %d\n", 20);  
  printf("Rented medium shoes: %d\n", rented_medium_counter);
  printf("Notrented medium shoes: %d", notrented_medium_counter);
  printf("\nRented medium_shoe IDs: ");
  for (int i = 0; i < 20; i++) {
    if (rented_medium[i]) {
      printf("%d ", medium_shoes[i]);
      
    }
  }

  
  // Statisctics report to display serial numbers of large rented shoes.
int notrented_large_counter = 25 - rented_large_counter;
  printf("\n\nTotal large_shoes: %d\n", 25);
  printf("Rented large shoes: %d\n", rented_large_counter);
  printf("Notrented large shoes: %d", notrented_large_counter);
  printf("\nRented large_shoe IDs: ");
  for (int i = 0; i < 25; i++) {
    if (rented_large[i]) {
      printf("%d ", large_shoes[i]);
     
    }
  }

   // Statisctics report to display serial numbers of lost shoes.
  printf("\n\n---- LOST REPORT ----\n");
  printf("\nLOST shoes: %d\n\n", lost_count);
  printf("\nLOST COUNTER\n");
  printf("small\t medium\t\tlarge\t");
  printf("\n\t%d\t \t%d\t\t %d\n", lost_small_counter, lost_medium_counter,
         lost_large_counter);

  // Display serial numbers of lost small shoes.
  printf("\nLOST small shoes: %d", lost_small_counter);
  
  printf("\nLOST small shoe IDs: ");
  for (int i = 0; i < 30; i++) {
    if (small_lost[i]) {
      printf("%d ", small_shoes[i]);
    }
  }

  // Display serial numbers of lost medium shoes.
  printf("\n\nLOST medium shoes: %d", lost_medium_counter);
  printf("\nLOST medium shoe IDs: "); 
  for (int i = 0; i < 20; i++) {
    if (medium_lost[i]) {
      printf("%d ", medium_shoes[i]);
    }
  }

  // Display serial numbers of lost large shoes.
  printf("\n\nLOST large shoes: %d", lost_large_counter);
  printf("\nLOST large shoe IDs: ");
  for (int i = 0; i < 25; i++) {
    if (large_lost[i]) {
  printf("%d ", large_shoes[i]);
  
    }
  }

  
}

 /*case 6: To view popularity report for most and least rented and most commonly and least 
 commonly lost shoes using the statistics of counted figures of the rented and lost 
  shoes.*/
void view_popularity() {
int rented_counter, lost_counter;
  // Statistics report to display counted figures of rented  and lost shoes.
  printf("\n\n==== POPULARITY STATISTICS ====\n");
  printf("\n\n==== ===== ===== =========\n");
  printf("RENTED COUNTER\n");
  printf("small\t medium\t\tlarge\t");
  printf("\n\t%d\t \t%d\t\t %d\n\n", rented_small_counter, rented_medium_counter,
         rented_large_counter);
 
  printf("\nLOST COUNTER\n");
  printf("small\t medium\t\tlarge\t");
  printf("\n\t%d\t \t%d\t\t %d\n", lost_small_counter, lost_medium_counter,
         lost_large_counter);

  printf("\n==== ===== ===== =========\n");


  printf("\n--- POPULARITY REPORT ---\n\n");
  
  

  // Popularity report for most rented shoe.
  printf("\nMost Rented Shoe:\n");
  /*Comparison if rented_small_counter is greater than both rented_medium_counter and 
   rented_large_counter.*/
  if (rented_small_counter >= rented_medium_counter && rented_small_counter >= 
       rented_large_counter && rented_small_counter  !=0)
     printf("small_shoe is the most rented.\n");

  /*Comparison if rented_medium_counter is greater than both rented_small_counter and 
   rented_large_counter.*/
  if (rented_medium_counter >= rented_small_counter && rented_medium_counter >= 
      rented_large_counter && rented_medium_counter !=0)
    printf("\nmedium_shoe is the most rented.\n");

  /*Comparison if rented_large_counter is greater than both rented_small_counter and 
     rented_medium_counter.*/
  if (rented_large_counter >= rented_small_counter && rented_large_counter >= 
     rented_medium_counter && rented_large_counter  !=0)
    printf("\nlarge_shoe is the most rented.\n");


  

    // Popularity report for least rented shoe.
  printf("\n\nLeast Rented Shoe:\n");
  /*Comparison if rented_small_counter is smaller than both rented_medium_counter and 
    rented_large_counter.*/
  if (rented_small_counter <= rented_medium_counter && rented_small_counter <= 
      rented_large_counter && rented_small_counter  !=0)   
    printf("small_shoe is the least rented.\n");
  
  
  /*Comparison if rented_medium_counter is smaller than both rented_small_counter and 
     rented_large_counter.*/
  if (rented_medium_counter <= rented_small_counter && rented_medium_counter <= 
      rented_large_counter && rented_medium_counter  !=0)
    printf("\nmedium_shoe is the least rented.\n");

  /*Comparison if rented_large_counter is smaller than both rented_small_counter and 
    rented_medium_counter.*/
  if (rented_large_counter <= rented_small_counter && rented_large_counter <= 
     rented_medium_counter && rented_large_counter  !=0)
    printf("\nlarge_shoe is the least rented.\n");



  
  // Popularity report for most commonly lost shoe.
  printf("\n\nMost Commonly Lost Shoe:\n");
   /*Comparison if lost_small_counter is greater than both lost_medium_counter and 
        lost_large_counter.*/
  if ( lost_small_counter >= lost_medium_counter && lost_small_counter >= 
     lost_large_counter && lost_small_counter  !=0) 
  printf("small_shoe is the most commonly lost.\n");

  /*Comparison if lost_medium_counter is greater than both lost_small_counter and 
    lost_large_counter.*/
   if (lost_medium_counter >= lost_small_counter && lost_medium_counter >= 
     lost_large_counter && lost_medium_counter  !=0) 
    printf("\nmedium_shoe is the most commonly lost.\n");

  /*Comparison if lost_large_counter is greater than both lost_small_counter and 
   lost_medium_counter.*/
  if (lost_large_counter >= lost_small_counter && lost_large_counter >= lost_medium_counter && lost_large_counter  !=0)
    printf("\nlarge_shoe is the most commonly lost.\n");
  
  
  
  
  
  // Popularity report for least commonly lost shoe.
  printf("\n\nLeast Commonly Lost Shoe:\n");
   /*Comparison if lost_small_counter is smaller than both lost_medium_counter and 
  lost_large_counter.*/
  if ( lost_small_counter <= lost_medium_counter && lost_small_counter <= 
     lost_large_counter)
    printf("small_shoe is the least commonly lost.\n");

  /*Comparison if lost_medium_counter is smaller than both lost_small_counter and 
     lost_large_counter.*/
  if (lost_medium_counter <= lost_small_counter && lost_medium_counter <= 
      lost_large_counter)
    printf("\nmedium_shoe is the least commonly lost.\n");

  /*Comparison if lost_large_counter is smaller than both lost_small_counter and 
 lost_medium_counter.*/
  if (lost_large_counter <= lost_small_counter && lost_large_counter <= 
    lost_medium_counter)
    printf("\nlarge_shoe is the least commonly lost.\n");


  printf("\n\n==== ===== ===== =========\n");

  
  printf("\n");
}


// Start of Main programe.
int main() {
  printf("\n\nWELCOME TO BOWL BABY BOWL SHOE RENTAL SERVICES!!!\n");
  // Initialize the shoes array with IDs
  initialize_shoes();

int choice;

  // Main loop to display menu and perform actions based on user choice and input
  while (true) {
    printf("\n\n--- MAIN RENTAL SERVICES MENU ---\n");
    printf("1. Shoe Inventory\n");
    printf("2. Rent a shoe\n");
    printf("3. Return a shoe\n");
    printf("4. Report a lost shoe\n");
    printf("5. View statistics\n");
    printf("6. View popularity\n");
    printf("7. Exit\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    // Perform actions based on user input from each menu.
    switch (choice) {
    case 1:
    shoe_inventory();// menu to display the available shoe types/IDs. 
      break;
    case 2:
      rent_shoe();// menu to rent shoes in sizes and types.
      break;
    case 3:
      return_shoe();// menu to return rented shoes.
      break;
    case 4:
      report_lost();// menu to report lost shoes.
      break;
    case 5:
      view_statistics();// menu to view statistics reports of rented 
      break;               //and and lost shoes.
    case 6:
      view_popularity();//menu to view popularity report of most/least 
      break;            //rented and most/least commonly lost shoes. 
    case 7:
        // Exit the program
      return 0;
    default:
      // Invalid input, prompt user to try again
      printf("Invalid choice, please try again.\n");
      break;
    
    }
  }

  return 0;
}






