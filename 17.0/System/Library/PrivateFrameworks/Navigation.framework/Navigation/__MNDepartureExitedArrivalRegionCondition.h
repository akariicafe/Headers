@class NSArray, NSMutableArray, MNDepartureUpdater;

@interface __MNDepartureExitedArrivalRegionCondition : NSObject <__MNDepartureCondition> {
    MNDepartureUpdater *_updater;
    NSArray *_arrivalRegions;
    double _closestDistanceToWaypoint;
    double _threshold;
    unsigned long long _numHistoricalLocations;
    NSMutableArray *_regionDepartureHistory;
}

- (void).cxx_destruct;
- (id)initWithUpdater:(id)a0 arrivalRegions:(id)a1;
- (double)scoreForLocation:(id)a0;

@end
