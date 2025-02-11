
# Lab1 Design Document

## Santiago Caldas Quiroga
## INET 3101


## Program Description
This program provides a text-based menu interface that allows the user to:
- View all records
- Add a new record
- Delete the last record
- Print the number of records
- Print the database size
- Print the number of modifications made to the database


## Menu Definition 
When the program runs, the following menu is displayed:

```
Database Menu
1. Print all records
2. Add record
3. Delete the last record
4. Print number of records
5. Print database size
6. Print number of changes
7. Exit
Enter your choice:
```

## Function Definitions

### 1. `main()`

  The `main()` function implements an infinite loop that repeatedly displays the menu and processes user input:
  - **Input Validation:**  
    - Checks whether the input is an integer.
    - Ensures the input integer is between 1 and 7.
  - **Switch Statement:**  
    - **Case 1:** Prints a message stating that no records are available.
    - **Case 2:**  
      - Prompts the user for record details.
      - Reads and displays the record details (part number, part name, part size, part size metric, and part cost).
    - **Case 3:** Informs the user that the delete record function has been selected.
    - **Case 4:** Informs the user that the function to print the number of records has been selected.
    - **Case 5:** Informs the user that the function to print the database size has been selected.
    - **Case 6:**  
      - Implements inline functionality using a static variable to track modifications.
      - Prompts the user to enter `1` to print the current modification count or `0` to increment the modification count.
      - Validates and performs the requested sub-action.
    - **Case 7:** Exits the program.


## File Listing
- **`CaldasQuiroga_Lab1.c`**  
  *(C source code file)*  
  Contains the full program implementation
   **`Comp_Lab1.c`**  
  *(C Compile code file)*  
  Contains the full program compiled implementation
- **`CQ_README_LAB1.md`**  
  *(documentation file)*  
  Contains this design document and project details.
  

---

