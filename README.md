# Algorithms and Data Structures Implementation

## Overview

This project provides implementations of various algorithms and data structures in C. The algorithms cover Dijkstra's Algorithm, Merge Sort, and Quick Sort. Additionally, it includes data structures for Binary Trees, Stack, and operations for evaluating postfix expressions, converting infix to postfix, and bracket matching.

## Project Structure

The project directory structure is organized as follows:

Project Root
│   main.c
│
└── Dijkstra'sAlgorithm
│       Dijkstra'sAlgorithm.c
│       Dijkstra'sAlgorithm.h
│
└── MergeSort
│       MergeSort.c
│       MergeSort.h
│
└── QuickSort
│       QuickSort.c
│       QuickSort.h
│
└── BinaryTrees
│       BinaryTrees.c
│       BinaryTrees.h
│
└── BracketMatching
│       BracketMatching.c
│       BracketMatching.h
│
└── EvaluatePostfix
│       EvaluatePostfix.c
│       EvaluatePostfix.h
│
└── InfixToPostfix
│       InfixToPostfix.c
│       InfixToPostfix.h
│
└── Stack
│       Stack.c
│       Stack.h
│
└── TreeTraversal
│       TreeTraversal.c
│       TreeTraversal.h
│
│   README.md


## Prerequisites

- A C compiler (e.g., GCC)

## How to Compile

Compile the project using the following command:

# Compile main.c
gcc -c main.c -o main.o

# Compile Dijkstra'sAlgorithm.c
gcc -c DijkstrasAlgorithm\DijkstrasAlgorithm.c -o DijkstrasAlgorithm\DijkstrasAlgorithm.o

# Compile MergeSort.c
gcc -c MergeSort\MergeSort.c -o MergeSort\MergeSort.o        

# Compile QuickSort.c
gcc -c QuickSort\QuickSort.c -o QuickSort\QuickSort.o     

# Compile BinaryTrees.c
gcc -c BinaryTrees\BinaryTrees.c -o BinaryTrees\BinaryTrees.o

# Compile BracketMatching.c
gcc -c BracketMatching\BracketMatching.c -o BracketMatching\BracketMatching.o

# Compile EvaluatePostfix.c
gcc -c EvaluatePostfix\EvaluatePostfix.c -o EvaluatePostfix\EvaluatePostfix.o

# Compile InfixToPostfix.c
gcc -c InfixToPostfix\InfixToPostfix.c -o InfixToPostfix\InfixToPostfix.o    

# Compile Stack.c
gcc -c Stack\stack.c -o Stack\stack.o    

# Compile TreeTraversal.c
gcc -c TreeTraversal\TreeTraversal.c -o TreeTraversal\TreeTraversal.o

# Link all object files into an executable named 'main'
 gcc -o program main.o Stack/stack.o InfixToPostfix/InfixToPostfix.o EvaluatePostfix/EvaluatePostfix.o BracketMatching/BracketMatching.o BinaryTrees/BinaryTrees.o TreeTraversal/TreeTraversal.o MergeSort/MergeSort.o QuickSort/QuickSort.o DijkstrasAlgorithm/DijkstrasAlgorithm.o

## How to Run
    - Run the compiled program using the following command: ./program

## Usage
    - To run various algorithms and data structures, choose the corresponding options in the interactive menu.