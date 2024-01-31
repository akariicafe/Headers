@class HMFTimer, NSString, HMDUnassociatedAccessory, NSObject;
@protocol OS_dispatch_queue, HMDWACAccessoryConfigurationDelegate, HMDWACDevice;

@interface HMDUnassociatedWACAccessory : HMDUnassociatedAccessory <HMFLogging, HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDWACDevice> _wacDevice;
    id /* block */ _completionHandler;
    HMFTimer *_handoffExpirationTimer;
    long long _state;
    HMDUnassociatedAccessory *_postWACAccessory;
}

@property (retain, setter=setWACDevice:) id<HMDWACDevice> wacDevice;
@property (readonly, weak) id<HMDWACAccessoryConfigurationDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSString *wacDeviceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)startConfigurationWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)transportTypes;
- (void)_abort:(id /* block */)a0;
- (void)_postWACMatchingAccessoryFound:(id)a0;
- (void)_configureDevice;
- (void)_configureDeviceCompleted:(id)a0;
- (void)_postWACMatchTimeout;
- (void)_requestUserPermission;
- (void)_userPermissionResponse:(BOOL)a0;
- (void)_waitForPostWACMatch;
- (void)cancelConfigurationWithCompletionHandler:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3 wacDevice:(id)a4;
- (void)setDelegate:(id)a0 withQueue:(id)a1;
- (void)updateWithMatchingUnassociatedAccessory:(id)a0;

@end
