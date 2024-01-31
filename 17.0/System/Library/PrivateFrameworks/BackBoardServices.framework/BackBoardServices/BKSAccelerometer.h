@class NSLock, NSThread;
@protocol BKSAccelerometerDelegate;

@interface BKSAccelerometer : NSObject {
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
}

@property (nonatomic) BOOL accelerometerEventsEnabled;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;
@property (nonatomic) BOOL passiveOrientationEvents;
@property (nonatomic) BOOL orientationEventsEnabled;
@property (weak, nonatomic) id<BKSAccelerometerDelegate> delegate;

- (void)_updateOrientationServer;
- (id)init;
- (void)dealloc;
- (void)_orientationDidChange;
- (void)_checkOut;
- (id)_orientationEventsThread;
- (void)_checkIn;
- (void).cxx_destruct;
- (void)_serverWasRestarted;
- (long long)currentDeviceOrientation;

@end
