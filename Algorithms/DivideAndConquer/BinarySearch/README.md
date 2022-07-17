# Binary Search

## What is Binary Search
Binary Search is a used to search an element or a value in a sorted Array .
**Binary Search** problem can also be solved using **Divide and Conquer** approach

## Approach
It keeps on dividing array into half until there is only one element is left in the Araay or it finds the desired element

## Bounding Function
Intialy left is the **0**<sub>th</sub> Index and right is the last index or **input.size()**
Bounding Function or the exit condition tells the recursive calls when to stop.
Having wrong exit condition can make for program to have infinite recursive calls.

```
if (left == right) {
  if(input[let] == value) return true;
  else return false;
}
```
## Finding Mid
each time you enter a function it checks for the exit conditions and if the exit conditions are not specified 
It goes on calculating the mid 
```
int m = (left + right) / 2;
```

## Checking Which Recursive call to make

```
else if (v[m] > val) {
            bSearch(v, val, l, m-1);
        }
        else {
            bSearch(v, val, m+1, r);
        }
```
# Example

Let's Take an example 


|2 |4 |6 |7 |9 |10 |23|25|28 |29|30 |36 |101 |1005|
| --- | --- | --- | --- |--- | --- | --- | --- |--- | --- | --- | --- |--- | --- |

