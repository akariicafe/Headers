@class HMFTimer, NSString, VNSession;

@interface HMIVisionSession : HMFObject <HMFTimerDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    VNSession *_session;
}

@property (class, readonly) HMIVisionSession *sharedInstance;

@property (readonly) HMFTimer *watchdogTimer;
@property (readonly) VNSession *vnSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
