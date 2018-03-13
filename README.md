# ECE244

A second year computer engineering course covering the fundamentals of object oriented programming in C++

This repo contains the lab instructions and my code for labs 2-6 of the Computer fundamentals course at UofT.

Most of this work involved simulating a resisitive circuit where a user can add and modify infinite resistors at nodes on a breadboard. The user can then specify voltages at certain nodes and have the simulator solve for the rest. Labs 5 and 6 focus on graphs and inheritance/graphics respectively.

The lab breakdowns are as follows:

## Lab 1

The first lab required us to debug and fix a few memory leaks (and other errors) in a large project.

## Lab 2: Command Interpreter

This was the first lab in the resitive circuit series. We used i/o streams to create a robust parser to interpret user input. This subsequently became the UI for future labs.

## Lab 3: Classes

In Lab 3 we created a "back-end" for the resistive circuit simulator started in lab 2. We Used classes and dynamically allocated arrays to represent resistors and nodes in the circuit. 

## Lab 4: Linked Lists

Lab 4 required us to port the array based back-end to a linked list backed one. We then had to solve for the voltages at every node in the circuit. This was the last of the resisitive circuit labs.

## Lab 5: Databases/Graphs

This lab focused on graphs and databases. We implemented a binary search tree from scratch to store a domain names and their corresponding IP address. This is called a "domain name server" and allowed for fast access to data based on an input string.

## Lab 6: Inheritance/Graphics

Finally lab 6 focused on inheritance and required us to write classes inheriting from a simple graphics framework (easyGL). We created a breadboard that allowed users to click, drag, and modify shapes on a screen.

<b>Note to future ECE244 students:</b> This repo can be useful as exposure to a "different" way of problem solving, but please don't use this in your own work. It's bad practice, unethical, and means you won't learn.
