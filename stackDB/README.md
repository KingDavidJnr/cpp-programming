# Simple DB using Stack Data Struct
A simple database app in C++ that uses stack data structures.

## Description
This app uses a stack data structure to store records in the database. The `Record` struct contains fields for a name, age, and phone number. The `db` stack is used to store records, and the user can add records, remove records, or display all records in the database.

The program starts by declaring a `stack<Record>` called `db`. The main loop of the program displays a menu of choices and prompts the user to select one. The `switch` statement handles each choice.

If the user selects choice 1, they are prompted to enter a new record's name, age, and phone number. The new record is then added to the `db` stack.

If the user selects choice 2, the most recent record is removed from the `db` stack. If the `db` stack is empty, a message is displayed instead.

If the user selects choice 3, all records in the `db` stack are displayed. If the `db` stack is empty, a message is displayed instead. A temporary stack is used to reverse the order of the records so that they are displayed in the order they were added.

If the user selects choice 4, the program exits.

If the user selects an invalid choice, they are prompted to try again.