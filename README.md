Name: Yaseen Allan

This program dynamically manages an array by reading integers from "input.txt" and allowing the user to interactively search, modify, add, and remove elements with exception handling, while displaying the updated array after each operation.

HOW THE PROGRAM WORKS

Reading Input:
The program starts by reading integers from input.txt using readDataFromFile. Each integer is added to the dynamic array using the addElement function, which reallocates memory as needed.

Interactive Menu:
After the initial load, the program displays an interactive menu with options to:

Display Array: Calls printArray to show the current array.
https://github.com/yaseenallan/CS-303-Assignment-1/blob/52e6e698de1aaeeeaf88227a9d70823fbe51bceb/Screenshot%20DS%201.png

Search Element: Uses searchElement to find an element and display its index.
https://github.com/yaseenallan/CS-303-Assignment-1/blob/1948b773f1eaed49c826092d84d4594c2126c76c/Screenshot%20DS%202.png

Modify Element: Uses modifyElement (within a try-catch block) to update an element's value.
https://github.com/yaseenallan/CS-303-Assignment-1/blob/b1f99a0490fc9b576d9b48a308c9ecdba8923b9a/Screenshot%20DS%203.png

Add Element: Uses addElement (within a try-catch block) to append a new element.
https://github.com/yaseenallan/CS-303-Assignment-1/blob/44eb3a086d85cad009e043ac5db18e3f249d275b/Screenshot%20DS%204.png

Remove Element: Uses removeElement to delete an element.
https://github.com/yaseenallan/CS-303-Assignment-1/blob/141adaf24ee553d528f92fb49247b4a77eaebb60/Screenshot%20DS%205.png

Exit: Ends the program.
https://github.com/yaseenallan/CS-303-Assignment-1/blob/14a8283c7125a910f65704088c3b5adc33eb2277/Screenshot%20DS%206.png

Memory Cleanup:
Before the program exits, it deallocates the dynamic array to free the memory.
