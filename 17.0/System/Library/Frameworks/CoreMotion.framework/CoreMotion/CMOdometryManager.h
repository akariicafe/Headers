@interface CMOdometryManager : NSObject {
    id _internal;
}

@property (nonatomic) double odometryUpdateInterval;

+ (BOOL)isAvailable;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)deallocPrivate;
- (void)feedOdometryData:(const struct InertialOdometryData { double x0; struct { unsigned long long x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; unsigned long long x3; unsigned long long x4; unsigned long long x5[3]; unsigned long long x6; } x1; } *)a0;
- (void)sendOdometryToClientPrivate;
- (void)setOdometryUpdateIntervalPrivate:(double)a0;
- (void)startOdometryUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startOdometryUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopOdometryUpdates;
- (void)stopOdometryUpdatesPrivate;

@end
