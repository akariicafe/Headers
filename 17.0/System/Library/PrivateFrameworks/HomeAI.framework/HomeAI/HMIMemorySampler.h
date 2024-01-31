@class HMFTimer, NSString, MovingAverage;

@interface HMIMemorySampler : HMFObject <HMFTimerDelegate, HMFLogging>

@property (readonly) HMFTimer *tick;
@property (readonly) MovingAverage *average;
@property long long highWaterMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;

@end
