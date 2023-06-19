# Routing Algorithm for Ocean Shipping and Urban Deliveries

## Objective
This project aims to design efficient algorithms and heuristics for finding optimal routes in the context of ocean shipping and urban deliveries. Specifically, the project focuses on solving the Traveling Salesperson Problem (TSP) using various datasets.

## Problem Statement
The TSP is a well-known problem that is considered intractable, meaning there are no efficient algorithms to solve it optimally. However, approximation algorithms based on heuristics can be devised to efficiently address TSP-based problems. In this project, the goal is to design efficient heuristics for the TSP in diverse scenarios, such as urban deliveries and ocean shipping.

The project is divided into three main parts:

1. Backtracking Algorithm:
    - Develop a backtracking algorithmic approach to the TSP.
    - Validate the algorithm using small graphs.
    - Analyze the feasibility of the backtracking approach for larger graphs.

2. Triangular Approximation Heuristic:
    - Implement a 2-approximation algorithm for the TSP.
    - Utilize the triangular inequality to ensure the approximation bound.
    - Compare the results of this heuristic with the backtracking algorithm for small graphs.

3. Other Heuristics (Nearest Insertion Heuristic):
    - Develop an efficient heuristic for the TSP.
    - Consider using the Nearest Insertion Heuristic, which involves iteratively inserting the nearest node to an existing tour.
    - Leverage geographic node data to improve the efficiency of the heuristic.
    - Compare the performance and solution quality of this heuristic with the 2-approximation algorithm.


To test the program, you must run the following commands:

```bash
$ cd src
$ cmake CMakeLists.txt
$ make
$ ./project2
```

Due to Github file size limitations, the dataset has to be downloaded from [here](https://mega.nz/folder/8ihAkKpY#LzNlVGZt3K_d5sJOT7D3Ww).
You must place the fold Data (downloaded from the link above) in the src folder.

You must download the 3 folders (graph1, graph2, graph3) and place them in the src/Data/Real-world Graphs/Real-world Graphs folder.

### Members

| Name                                        | Number    | Git                                             |
|---------------------------------------------|-----------| ---                                             |
| **Francisco Tomás Marques Lopes**           | 202108796 | [FranciscoLopesLeic](https://github.com/FranciscoLopesLeic)       |
| **Francisco Pires da Ana**                  | 202108762 | [franciscopana](https://github.com/franciscopana)             |
| **Maria Carlota Gomes Ribeiro Matos Leite** | 202005428 | [carlotaleite](https://github.com/carlotaleite) |