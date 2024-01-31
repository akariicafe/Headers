@class HDSQLitePredicate, HDProfile, _HDWorkoutCondenserAnalyticsAccumulator;

@interface _HDWorkoutCondensationConfiguration : NSObject {
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    double _minimumWorkoutDuration;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    long long _deletedSampleThreshold;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}

- (void).cxx_destruct;

@end
