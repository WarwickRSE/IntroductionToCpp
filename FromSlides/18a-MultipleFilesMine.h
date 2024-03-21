//These are "include guards" they stop a header file
//from being accidentally included twice
//Essentially there is a text processor that
//runs before the compiler called the C preprocessor
//It has it's own variables that you can set and check
//This checks for if the variable MULTIPLE_FILES_H is unset
//(ifndef means if not defined). If it is undefined then
//define it and then put in the declaration for your functions
//If you encounter it a second time (i.e. it has been defined)
//then jump straight to #endif - this means that the second time
//the text is just skipped
#ifndef MULTIPLE_FILES_H
#define MULTIPLE_FILES_H

//This is a function declaration. It looks exactly the same as the function
//definition but ends with a ; rather than the { } containing the code
//for the function. There are times when you want to put the whole declaration
//of a function in a header file (look up "header only library") but we're not
//talking about that here
// For normal functions like this we actually CAN'T put the definition here if we
// include this file more than once. Look up the One Definition Rule for the gory details
void myfunc(int i);


#endif
