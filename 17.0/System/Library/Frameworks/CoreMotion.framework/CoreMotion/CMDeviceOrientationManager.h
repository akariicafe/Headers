@interface CMDeviceOrientationManager : NSObject {
    id _internal;
}

@property (class, readonly, nonatomic, getter=isAlwaysOn) BOOL alwaysOn;

+ (void)initialize;
+ (BOOL)isAvailable;
+ (void)dummySelector:(id)a0;

- (id)initPrivate;
- (void)startDeviceOrientationUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (BOOL)isDeviceOrientationActive;
- (void)start;
- (BOOL)orientationNotificationsDisabled;
- (void)signalAndReleaseSemaphoreIfNecessaryPrivate;
- (void)onNotification:(id)a0;
- (void)stop;
- (BOOL)isDeviceOrientationAvailable;
- (id)deviceOrientationBlocking;
- (id)stringForOrientation:(int)a0;
- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)updateAggregateDictionaryPrivate;
- (void)deallocPrivate;
- (void)onMotionPreferencesUpdated;
- (void)stopDeviceOrientationUpdatesPrivate;
- (void)onDeviceOrientation:(const struct Sample { double x0; int x1; } *)a0;
- (void)setDeviceOrientationCallbackModePrivate:(int)a0;
- (void)stopDeviceOrientationUpdates;

@end
