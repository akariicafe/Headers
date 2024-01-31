@class HMFTimer, NSString, HMMTRAccessoryServer;

@interface HMMTRAccessoryReachabilityManager : HMFObject <HMFTimerDelegate>

@property (retain, nonatomic) HMFTimer *reachabilityTimer;
@property (nonatomic) BOOL reachable;
@property (readonly, weak, nonatomic) HMMTRAccessoryServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 timeout:(long long)a1 queue:(id)a2;
- (void)reachabilityUpdate;

@end
