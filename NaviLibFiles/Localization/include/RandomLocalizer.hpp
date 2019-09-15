#include"StateEstimator.hpp"
#include<iostream>

class RandomLocalizer : public StateEstimator {
	public:
		virtual void estimate();
};