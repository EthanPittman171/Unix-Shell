# Unix-Shell
A Unix shell created in C

This project is a shell that works on the Unix system. Here, a shell is defined as a command-line interpreter that provides a command line interface for Unix-like operating systems. Once started, the shell prints a prompt '#' and reads a command, which is terminated by the newline character (Enter Key).

## Commands
### movetodir [location]    NOT YET IMPLEMENTED
Move a user to the specified directory.

### whereami    NOT YET IMPLEMENTED
Prints the current directory to the terminal.

### history [-c]    NOT YET IMPLEMENTED
Without '-c' being passed as a parameter, the command will print the previous commands. The list will start with the most recent command and backtrace from there. The most recent command will start with a 0, and will always be "history" since that is the command that is required to print the command log.

When '-c' is passed as a parameter, the command log is cleared. This is irreversible. Using "history" immediatley running "history -c" will result in the following output: 0: history.

### leave    NOT YET IMPLEMENTED
Terminate the Unix Shell program.

### recall [number]    NOT YET IMPLEMENTED
Executes the command in the command log with the specified number. For example, if the command "history" yields

0: history
1: whereami
2: movetodir "C:\Projects\Unix Shell Project"

then the command "recall 1" will execute the command "whereami".

### start [-p] [program]    NOT YET IMPLEMENTED
The command runs an executable file stored at the path given as a command line argument. For example, the command "start ./myProgram.exe" will run an executable file named "myProgram." After the executable name is given, command line arguments can be given after it as needed for the program.

If '-p' is passed as an argument, the PID (process identifier) of the executed program is printed to the terminal. Note, this only works if a valid program was passed as a parameter and the program has been executed successfully. 

### kill [PID]    NOT YET IMPLEMENTED
Immediately terminate the program with the specified PID.

### killall    NOT YET IMPLEMENTED
Immediately terminate all programs started by the Unix Shell. The terminal will print the number of programs terminated along with their PIDs.

## Notes for Use
- All file paths that use spaces must be contained inside double quotations. For example, C:\My Path must be written as "C:\My Path".

- New features may be added at anytime to this shell. Refer to the above documentation for the most recently implemented commands.
