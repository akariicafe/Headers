@class NSOperationQueue;

@interface CMOdometryManagerInternal : NSObject {
    struct InertialOdometryData { double timestampSecs; struct { unsigned long long timestamp; struct { float x; float y; float z; } position; struct { float x; float y; float z; } deltaVelocityCumSum; unsigned long long timestampPositionRollOver; unsigned long long timestampVelocityRollOver; unsigned long long timestampDeltaPositionUnavailable[3]; unsigned long long timestampUninitialized; } state; } _previousOdometryData;
    struct InertialOdometryData { double timestampSecs; struct { unsigned long long timestamp; struct { float x; float y; float z; } position; struct { float x; float y; float z; } deltaVelocityCumSum; unsigned long long timestampPositionRollOver; unsigned long long timestampVelocityRollOver; unsigned long long timestampDeltaPositionUnavailable[3]; unsigned long long timestampUninitialized; } state; } _currentOdometryData;
    BOOL _hasFirstSample;
    struct Dispatcher { void /* function */ **x0; id x1; } *_odometryDispatcher;
    double _odometryUpdateInterval;
    id /* block */ _odometryHandler;
    NSOperationQueue *_odometryQueue;
}

- (id)init;

@end
