/*
 * Abstract class for all path tracking algorithms
 */


class PathTracker {
     // virtual destructor is required if the object may
     // be deleted through a pointer to PathTracker
    //virtual ~PathTracker() {}

    virtual void update() {}
};