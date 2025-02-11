#include <stdio.h>

int main() {
    int choice, exitout = 7;                    // Declares values to be used throughout
    int part_num;                             // Changed to int for part number
    char part_name[100], part_size_metric[10];  // Creates Array for part sections with Char
    float part_size, part_cost;               // Declares part sections with float

    while (1) { 
        // Outputs menu to the user
        printf("\nDatabase Menu\n");
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("Enter your choice: \n");
        
        // Gets input from user 
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // Checks for invalid input
            printf("Invalid input! Enter a number between 1 and 7.\n");
            continue;
        } else if (choice < 1 || choice > 7) { // Checks for invalid input if int not 1-7
            printf("Invalid input! Enter a number between 1 and 7.\n");
            continue; 
        } else {
            switch (choice) {
                case 1: // Print record
                    printf("No records available.\n");
                    break;
               
                case 2: // Add record
                    printf("Enter part number: ");
                    scanf("%d", &part_num);

                    printf("Enter part name: ");
                    scanf(" %[^\n]", part_name); 

                    printf("Enter part size: ");
                    scanf("%f", &part_size);
	
                    printf("Enter part size metric (e.g., lbs, kg): ");
                    scanf("%s", part_size_metric);

                    printf("Enter part cost: ");
                    scanf("%f", &part_cost);

                    // Output the values added to the user
                    printf("\nYou entered:\n");
                    printf("\tPart number = %d\n", part_num);
                    printf("\tPart name = \"%s\"\n", part_name);
                    printf("\tPart size = %.2f\n", part_size);
                    printf("\tPart size metric = \"%s\"\n", part_size_metric);
                    printf("\tPart cost = $%.2f\n", part_cost);
                    break;
                
                case 3: // Delete last record 
                    printf("You have entered the delete last record function.\n");
                    break;
               
                case 4: // Print number of records
                    printf("You have entered the Print number of records function.\n");
                    break;

                case 5: // Print database size
                    printf("You have entered the Print database size function.\n");
                    break;

                case 6: // Print number of changes
                {
                    // Static variable to store the number of modifications
                    static int mods = 0;
                    int num_changes;
          
                    printf("Enter 1 to print the number of changes: \n");
                    printf("Enter 0 to increment the changes count: ");
                    if (scanf("%d", &num_changes) != 1) {
                        while(getchar() != '\n'); // Checks for invalid input
                        printf("Invalid action. Please enter 0 or 1.\n");
                    } else {
                        if (num_changes == 1) {
                            // Print number of modifications
                            printf("Database has been modified %d times\n", mods);
                        } else if (num_changes == 0) {
                            // Increments modifications count and also prints updated count
                            mods++;
                            printf("Database has been modified %d times\n", mods);
                        } else {
                            printf("Invalid action. Please enter 0 or 1.\n");
                        }
                    }
                    break;
                }

                case 7: // Exit switch case
                    printf("Program exited.\n");
                    return 0;
            }
        }
    }
    
    return 0; // end of program
}

