/*
 * Abstract class for all path planning algorithms
 */


class PathPlanner {
     // virtual destructor is required if the object may
     // be deleted through a pointer to PathPlanner
    //virtual ~PathPlanner() {}

    virtual void plan() {}
};