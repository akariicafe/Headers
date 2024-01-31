@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject {
    BOOL _hasProcessedWorkout;
    long long _workoutsToCondense;
    long long _workoutsToRecondense;
    long long _condensedWorkouts;
    long long _processedWorkouts;
    long long _createdSeries;
    long long _deletedSamples;
}

- (id)init;
- (id)description;

@end
