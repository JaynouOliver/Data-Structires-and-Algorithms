cmake_minimum_required(VERSION 3.20)
project(Data_Structires_and_Algorithms)

set(CMAKE_CXX_STANDARD 14)

include_directories(06_Vectors)
include_directories("19_Heaps or Priority Queues")
include_directories(20_Hashing)
include_directories("21_Trie Data Structure")

add_executable(Data_Structires_and_Algorithms
        01_Arrays/10_BruteForce.cpp
        01_Arrays/11_PrefixSums.cpp
        "01_Arrays/12_Kadane's Algorithm .cpp"
        "01_Arrays/13_Vector Array .cpp"
        "01_Arrays/1_basic array .cpp"
        "01_Arrays/2_finding MAx & MIN .cpp"
        "01_Arrays/3_sorting in arrays .cpp"
        "01_Arrays/4_searching in arrays .cpp"
        "01_Arrays/5_linearSearch .cpp"
        01_Arrays/6_BinarySearch.cpp
        01_Arrays/7_Reverse_Array.cpp
        01_Arrays/8_Printing_Pairs.cpp
        01_Arrays/9_Printing_Subarrays.cpp
        "02_Basic Sorting Techniques/1_Bubble Sort .cpp"
        "02_Basic Sorting Techniques/2_Insertion Sort .cpp"
        "02_Basic Sorting Techniques/3_Selection Sort .cpp"
        "02_Basic Sorting Techniques/4_Inbuilt Sort and Comparators .cpp"
        "02_Basic Sorting Techniques/5_Counting Sort .cpp"
        "03_Character Arrays or Strings/1_Using cin.get in C++  .cpp"
        "03_Character Arrays or Strings/2_Using cin.getline() in C++ .cpp"
        "03_Character Arrays or Strings/Character Arrays.cpp"
        "03_Character Arrays or Strings/count spaces digits words.cpp"
        "03_Character Arrays or Strings/Largest String.cpp"
        "03_Character Arrays or Strings/Run Length Encoding .cpp"
        "04_2D Arrays/1_2d arrays.cpp"
        "04_2D Arrays/2_2d character arrays.cpp"
        "04_2D Arrays/3_spiral print.cpp"
        "04_2D Arrays/5_Mango tree .cpp"
        "04_2D Arrays/Run length encoding.cpp"
        "04_2D Arrays/staircase search.cpp"
        "05_Pointers and Dynamics/1_pointers.cpp"
        "05_Pointers and Dynamics/2_pointers.cpp"
        "05_Pointers and Dynamics/4_reference variables.cpp"
        "05_Pointers and Dynamics/5_pass by reference.cpp"
        "05_Pointers and Dynamics/6_Pass by reference (pointers).cpp"
        "05_Pointers and Dynamics/7_dynamic 2d array.cpp"
        "05_Pointers and Dynamics/8_working with dynamic array.cpp"
        "06_Vectors/2d vector.cpp"
        06_Vectors/demo.cpp
        06_Vectors/demoVector.cpp
        "06_Vectors/vector class -1 .cpp"
        06_Vectors/vector.h
        07_Recursion/01_recursion.cpp
        07_Recursion/02_fibonnaci.cpp
        07_Recursion/03_isSortedArrayCheck.cpp
        "17_Binary Tree/Binary Tree.cpp"
        "18_Binary Search Tree/Binary Search Tree.cpp"
        "19_Heaps or Priority Queues/Nearest Car Code/Nearest Car Code .cpp"
        "19_Heaps or Priority Queues/heap.h"
        "19_Heaps or Priority Queues/heap_test.cpp"
        20_Hashing/Hashtable.h
        20_Hashing/hastabletest.cpp
        "21_Trie Data Structure/trie.cpp"
        "21_Trie Data Structure/trie.h"
        22_Graphs/01_adj_list.cpp
        22_Graphs/02_adj_list.cpp
        22_Graphs/02_adj_list_node.cpp
        22_Graphs/03_bfsCode_.cpp
        "22_Graphs/04_dfs search.cpp"
        "22_Graphs/05_Topological Ordering using BFS code.cpp"
        "22_Graphs/06_Dijkstra's Algorithm.cpp"
        "23_Dynamic Programmig/1_Coin Change.cpp"
        "23_Dynamic Programmig/2_Longest Common Subsequence Code.cpp"
        "23_Dynamic Programmig/3_Kanpsack Problem Code.cpp"
        "23_Dynamic Programmig/4_Wine Problem.cpp")
