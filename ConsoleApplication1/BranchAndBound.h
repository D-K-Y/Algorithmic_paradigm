#pragma once
/**
* BRANCHANDBOUND: Uses BFS (Breadth First Search) to create 
* sate space Tree.
*/
#include <iostream>
class BranchAndBound
{
public:
	void create_State_Space_tree(std::string&);
	void boundingFunction();
};

