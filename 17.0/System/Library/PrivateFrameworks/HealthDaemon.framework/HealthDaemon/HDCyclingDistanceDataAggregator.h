@class HDWorkoutManager;

@interface HDCyclingDistanceDataAggregator : HDActiveQuantityDataAggregator {
    HDWorkoutManager *_workoutManager;
}

- (void).cxx_destruct;
- (id)initWithDataCollectionManager:(id)a0;
- (id)additionalMetadataForCollector:(id)a0;

@end
