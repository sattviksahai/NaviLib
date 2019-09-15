/*
 * Abstract class for all localization/State Estimation algorithms
 */


class StateEstimator {
     // virtual destructor is required if the object may
     // be deleted through a pointer to PathPlanner
    //virtual ~PathPlanner() {}

    virtual void estimate() {}
};