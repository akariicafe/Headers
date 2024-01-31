@class ATXLocationManagerState, CLLocation, NSDate;

@interface ATXLocationManagerGuardedData : NSObject {
    CLLocation *currentLocation;
    NSDate *lastRequestLocationDate;
    unsigned long long currentRoutineMode;
    ATXLocationManagerState *state;
    NSDate *lastLOIUpdateTimestamp;
    NSDate *lastRoutineModeTimestamp;
    NSDate *lastPredictedLOIsUpdateTimestamp;
    NSDate *lastPredictedExitTimesUpdateTimestamp;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;

@end
