@interface CMAltimeter : NSObject {
    id _internal;
}

+ (long long)authorizationStatus;
+ (void)initialize;
+ (void)dummySelector:(id)a0;
+ (BOOL)isSignificantElevationAvailable;
+ (BOOL)isAbsoluteAltitudeAvailable;
+ (BOOL)isRelativeAltitudeAvailable;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)deallocPrivate;
- (void)queryElevationProfileFromDate:(id)a0 toDate:(id)a1 withBatchSize:(unsigned long long)a2 withHandler:(id /* block */)a3;
- (void)stopSignificantElevationUpdates;
- (void)onFilteredPressure:(const struct Sample { double x0; struct { float x0; float x1; } x1; } *)a0;
- (void)pauseAbsoluteAltitudeUpdates;
- (void)querySignificantElevationChangeFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)resumeAbsoluteAltitudeUpdates;
- (void)startAbsoluteAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startRelativeAltitudeUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startSignificantElevationUpdatesWithHandler:(id /* block */)a0;
- (void)stopAbsoluteAltitudeUpdates;
- (void)stopRelativeAltitudeUpdates;
- (void)stopRelativeAltitudeUpdatesPrivate;

@end
