#include"PathPlanner.hpp"
#include<iostream>

class RandomPlanner : public PathPlanner {
	public:
		virtual void plan();
};