Hi, I'm S.Allwin Zola,
I have come up the solution on how to implement rcat (reverse of Linux cat command) function in C programming. 
Cat command in linux is nothing but acronym for concatenation, where it is used to handle and manipulate files and data efficiently in Linux Operating Systems.
Firstly to get started, I have learnt on how to open and read a text file in C program in Linux cat command.
Then I studied on how to reverse each line and and print them in reverse order line by line.
In order to do this firstly open a text editor and write your C code and save it in 'filename.c' extension in a directory.
In the same directory open a text document written something line by line and save it. 
Remember the C file and the text file must be in the same directory/folder/file.
Now that you have written the code, to compile it open your terminal by clicking ctrl + alt + t and type 'pwd' in order to confirm that the executable file is in or pointing the current directory/folder/file.
Now type 'ls' in the terminal and check if your c file and text file show up.
Now enter 'gcc -o Documents cat.c' (My cat.c is saved in Document folder, enter your path accordingly).
Now enter './Documents nline.txt' (nline.txt is my text file, enter yours accordingly).
Now you must see the contents in your text file getting printed in the colsole/terminal.
In my case it is: 
This is line 1.
This is line 2.
This is line 3.

The same applies for 'rcat.c', compile it by typing 'gcc -o Documents rcat.c'.
Now enter './Documents nline.txt'.
Now you must see that the contents in your text file getting printed in reverse order.
In my case it is :
3 enil si sihT
2 enil si sihT
1 enil si sihT

Here in order to print after I opened the file to read I print the line in reverse order line by line instead of doing it altogether, which is time and space efficient.

Thank You.
