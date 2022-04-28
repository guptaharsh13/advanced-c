// Pre Processing
// remove comments
// expansion of macros
// expansion of include files
// kinda automated editor, that modifies a copy of the actual source code

// Compilation
// Assembly level instructions are generated

// Assembly
// Assembly level instructions are converted to machine code

// Linking
// resolves function calls and makes one file - complete program

// #include directive - runs before compilation (evident from above)
// <> - standard header files (system files), "" means look in the current directory

// macros are faster than functions - because they reduce the overhead of invoking the function and then, returning the control to the main method

#define sum(a, b) a + b

#define PI 3.14

const int pi = 3.14;

void main()
{
#define DEBUG

#ifdef DEBUG
    printf("From debug mode\n");
#endif

#undef DEBUG

#ifdef DEBUG
    printf("From debug mode 2\n");
#endif

    printf("The sum - %d\n", sum(3, 4));
}

// pre-defined macros

// __DATE__
// __TIME__
// __FILE__ - current filename
// __LINE__ - current line number
// __STDC__ - if program is compiled with ANSI standard - I dont know what does ANSI mean though