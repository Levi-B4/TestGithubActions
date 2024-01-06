# Project 0 - Day One

## Steps to complete this lab assignment:

The goal is to take you through the entire lifecycle of a project. 

1. On the top right of this page, click on *Use this template* > *Create a new repository*
2. Clone the repo to your local machine.  
3. Open the project in an IDE/editor of your choosing. 
4. The "scenario" for this project is to open a file that contains integers and print the integers to the terminal and to a separate file AND include the average of the numbers at the end.  Currently, the code in `main.cpp` prints to the screen and to a separate file. You need to:
	- add code to `main.cpp` to calculate the average of the numbers read in.
	- print the average to both the terminal and the output file. 
5. After you save `main.cpp`, build the project. If there are any compile errors, they'll show up now.  Fix them and rebuild. 
6. Commit your changes to github.

## Input and Output Files

As you begin using input files and output files for future projects,
you'll need to modify the `CMakeLists.txt` file and the `.github/workflows/build.yaml` files.
For this project, I have already made the changes for you. However, please read the instructions/notes below know how to do it for future projects. 

Place any input files in the folder that contains your source code.  When your project is built, it will be copied into
the build directory by CMake.

- `CMakeLists.txt`
    - Open it and look for the commented section (with `#` signs).  Edit the `set(input01 "")` etc.
    based upon how many files you need.
    - there should be one `set(...)` statement per input file
    - you DO NOT need to list output files in `CmakeLists.txt`.

- `.github/workflows/build.yaml`
    - Open this file and look for the `INPUT_FILES:` command near the top.
    - List the input file names in the order they should be sent to argv of main.
    - OUTPUT file need to be listed here as well in the `OUTPUT_FILES:` section.
    - For example:
        ```yaml
        INPUT_FILES: input01.txt
        OUTPUT_FILES: output01.txt
        ```
      would be equivalent to the following execution command:
      ```yaml
      ./executableName input01.txt output01.txt
      ```   
