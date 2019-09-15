//#include</home/sattvik/Navilib/NaviLib/lib/CommonUtils/include/PurePursuit.hpp>
#include"Tracker.hpp"
#include"Planner.hpp"
#include"Localizer.hpp"
#include<iostream>

int main() {
	std::cout << "hello\n";
	RandomTracker tracker;
	tracker.update();

	RandomPlanner planner;
	planner.plan();

	RandomLocalizer localizer;
	localizer.estimate();
}