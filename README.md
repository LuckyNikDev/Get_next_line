# Get_next_line
Chapter III
Mandatory part - Get_next_line
Calling your function get_next_line in a loop will then allow you to read the text
available on the file descriptor one line at a time until the end of it. 
Your function should return the line that has just been read. If there is nothing
else to read or if an error has occurred it should return NULL. 
Make sure that your function behaves well when it reads from a file and when it
reads from the standard input. 
LIBFT is not allowed for this project. You must add a get_next_line_utils.c file
which will contain the functions that are needed for your get_next_line to work.
Your program must compile with the flag -D BUFFER_SIZE=xx which will be used
as the buffer size for the read calls in your get_next_line. This value will be
modified by your evaluators and by the moulinette.
The program will be compiled in this way:
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c.
  Your read must use the BUFFER_SIZE defined during compilation to read from
a file or from stdin. This value will be modified during the evaluation for testing
purposes.
  In the header file get_next_line.h you must have at least the prototype of the
function get_next_line.
  lseek is not an allowed function. File reading must be done only once.
  We consider that get_next_line has undefined behavior if, between two calls, the
same file descriptor switches to a different file before reading everything from the
first fd.
  Finally we consider that get_next_line has undefined behavior when reading from
a binary file. However, if you wish, you can make this behavior coherent.
  Global variables are forbidden.
  Important: You should always return the line that has been read followed by a ’\n’
unless you have reach end of file and the is no ’\n’.
