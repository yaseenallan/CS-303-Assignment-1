Name: Yaseen Allan

HOW THE PROGRAM WORKS
Reading Input:
The program starts by reading integers from input.txt using readDataFromFile. Each integer is added to the dynamic array using the addElement function, which reallocates memory as needed.

Interactive Menu:
After the initial load, the program displays an interactive menu with options to:

Display Array: Calls printArray to show the current array.

Search Element: Uses searchElement to find an element and display its index.
Modify Element: Uses modifyElement (within a try-catch block) to update an element's value.
Add Element: Uses addElement (within a try-catch block) to append a new element.
Remove Element: Uses removeElement to delete an element.
Exit: Ends the program.
Memory Cleanup:
Before the program exits, it deallocates the dynamic array to free the memory.
