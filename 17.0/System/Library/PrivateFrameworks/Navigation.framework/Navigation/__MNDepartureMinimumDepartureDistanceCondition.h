@class NSArray, MNDepartureUpdater;

@interface __MNDepartureMinimumDepartureDistanceCondition : NSObject <__MNDepartureCondition> {
    MNDepartureUpdater *_updater;
    NSArray *_arrivalPoints;
    double _closestDistanceToWaypoint;
    double _threshold;
}

- (void).cxx_destruct;
- (id)initWithUpdater:(id)a0 arrivalPoints:(id)a1 distanceThreshold:(double)a2;
- (id)initWithUpdater:(id)a0 distanceThreshold:(double)a1;
- (double)scoreForLocation:(id)a0;

@end
