# File I/O

## What is the difference between system call and function call?
	-> the differece is :- System call is a request for the kernel to access a resource while function call is a request made by a program to perform a specfic task.
			  :- System calls are used when a program needs to communciate with the kernel while function calls are used to call a specfic function within a program

=======================================================================================================
	
	# Files in the directory
## C codes

* 0-read_textfile.c - a function that reads a text file and prints it to the POSIX standard output

* 1-create_file.c - a function that creates a file

* 2-append_text_to_file.c - a function that appends text at the end of a file

* 3-cp.c - a function that copies the content of a file to another file


## other files
 * Requiescat - a file with a poem (I just like the poem and its to run the --read_textfiles.c
	to comile it "gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a"
	to run it ./a Requiescat
