# Basic Unix Commands

## pwd
* present working directory
* 'where am i'
* displays a path starting with /

## ls
* list
* what's here?
* shows a list of files and directories in this directory
* ls -l shows a longer listing with more information
* ls -al shows all files including hidden files
* You can filter: ls *.cpp

## cd
* change directory
* move to a new directory
* cd / goes to the root
* cd .. goes up one level
* cd anotherdirectory goes to a subdirectory if it exists
* paths can get complex: cd ../../webFiles 

## mv
* move or rename a file
* mv old.txt new.txt
* mv new.txt ..

## cp
* copy a file
* cp old.txt new.txt

## rm
* remove a file
* be very careful, because it's permanent
* rm badstuff.txt

## chmod
* change mod
* really change permissions
    you    group   world
    rwx    rwx     rwx

* chmod 644 myfile.txt = rw-r--r--
* chmod 755 myfile.txt = rwxr-xr-x

## clear 
* clear
* clears the screen

## nano
* nano fileName
* very basic editor
* all commands available on screen
* works but quite basic

## vim
* vim fileName
* ridiculously powerful
* a bit odd to start with
* if you invest some time into it, it can do anything
* command mode - every key is a *command*
* insert mode - type stuff in
* instructions mode - more powerful commands

## most important commands
* i - go to insert mode
* esc - go to command mode
* w - forward one word 
* b - back a word 
* x - delete current character
* u - undo last operation
* d - delete something

## combining commands
* 3w - go forward three words
* dw - delete next word
* 3dw - delete three words

## basic copy and paste
* dd delete current line
* P (shift-p) - paste

## instructions mode
* esc : to type in more powerful commands
* :write - write the current file
* :write fileName - make a copy of this file at fileName
* :quit - exit the editor
* :quit! - exit ignoring changes
* you can use single letter shortcuts
* :wq

## handy commands
* :set number - turns on line numbers
* :5 - go directly to line 5
* :set autoindent - turn on autoindent
* :set expandtab - tab converts to spaces (great for python)
* :set tabstop=4 - tab is four spaces
