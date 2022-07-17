<h1> DIJKASTRA'S </h1>

## Description
Dijkastra's algorithm follows Greedy approach to find the shortest path

Example Covered 

```mermaid
flowchart LR;
    id1(((1)))-- 7 ---id2(((2)));
    style id1 fill:#f9f,stroke:#333,stroke-width:4px
    id1(((1)))-- 14 ---id6(((6)));
    id1(((1)))-- 9 ---id3(((3)));
    id2(((2)))-- 10 ---id3(((3)));
    id2(((2)))-- 15 ---id4(((4)));
    id3(((3)))-- 11 ---id4(((4)));
    id3(((3)))-- 2 ---id6(((6)));
    id4(((4)))-- 6 ---id5(((5)));
    id5(((5)))-- 9 ---id6(((6)));
    style id5 fill:#f9f,stroke:#333,stroke-width:4px
    
```

We will be Finding a shortest Path from **1** to **5**

# Solution

We startwith **BFS**  from Node 1
```mermaid
flowchart LR;
    id1(((1)))== 7 ==>id2(((2)));
    style id1 fill:#f9f,stroke:#333,stroke-width:4px
    id1(((1)))-. 14 .->id6(((6)));
    id1(((1)))-. 9 .->id3(((3)));
```

