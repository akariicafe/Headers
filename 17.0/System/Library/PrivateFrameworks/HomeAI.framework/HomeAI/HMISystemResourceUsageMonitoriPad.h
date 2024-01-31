@class HMINotifydObserver, NSString, NSObject, HMISystemResourceUsage;
@protocol HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;

@interface HMISystemResourceUsageMonitoriPad : HMFObject <HMISystemResourceUsageMonitorProtocol, HMFLogging>

@property (weak) id<HMISystemResourceUsageMonitorDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly) HMINotifydObserver *notifydObserverForDisplayState;
@property (readonly) HMINotifydObserver *notifydObserverForLockState;
@property (getter=isDisplayOn) BOOL displayOn;
@property (getter=isLocked) BOOL locked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (void).cxx_destruct;
- (id)getCurrentSystemResourceUsage;
- (id)initWithWorkQueue:(id)a0;
- (void)handleResourceUsageNotification;
- (BOOL)computeResourceUsageLevel;
- (void)possibleComputeResourceChange;

@end
