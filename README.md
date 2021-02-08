# Twist-Cube-Simulator
Simulates rotations of a 2x2 Rubik's cube using the commands R(right), L(left), U(upper), B(back), D(Down), X,Y,Z (rotations), and + to denote a counter-clockwise motion.
To do the same manipulation twice in a row, follow your command by the number "2".

To use:
1. Clone this repository
2. Ensure c++/g++ is installed on your computer.
3. Compile the .c file by running the following in your terminal:<br>
    `g++ twist.c`
4. Execute the following by running the following in your terminal:<br>
    `a.exe [series of commands]` (if using Windows) -or-<br>
    `./a.out [series of commands]` (if using Linux)
    
    Example:<br>
    `./a.exe FR2U+L`
        ->Rotate front face clockwise
        ->Rotate right face twice
        ->Rotate upper face counter-clockwise
        ->Rotate left face clockwise
  
<img src="https://i.ibb.co/DW6DPXZ/twist-example.png">
