@interface PXVelocityNumberFilter : PXNumberFilter {
    double _minimumSampleInterval;
    double _previousVelocityWeight;
    double _lastValue;
    double _lastTime;
    double _velocity;
    double _previousVelocity;
    double _filteredVelocity;
}

+ (id)gestureVelocityFilter;

- (double)updatedOutput;
- (id)initWithInput:(double)a0;

@end
