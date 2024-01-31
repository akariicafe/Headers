@class NSString;
@protocol BLSHOSInterfaceProviding, BLSHOnSystemSleepActionDelegate;

@interface BLSHOnSystemSleepAction : NSObject <SWSystemSleepObserver, BSInvalidatable, BSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    id<BLSHOnSystemSleepActionDelegate> _delegate;
    id /* block */ _lock_proceedWithSleepBlock;
    double _lock_sleepRequestedTime;
    long long _lock_state;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithIdentifier:(id)a0 delegate:(id)a1;
+ (id)actionWithIdentifier:(id)a0 delegate:(id)a1 osInterfaceProvider:(id)a2;

- (void)uninstall;
- (void)systemSleepMonitorSleepRequestAborted:(id)a0;
- (void)invalidate;
- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;
- (void)systemSleepMonitorWillWakeFromSleep:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)install;
- (void)systemSleepMonitor:(id)a0 sleepRequestedWithResult:(id /* block */)a1;
- (void)actionCompleted;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1 osInterfaceProvider:(id)a2;
- (void)systemWillWakeForReason:(id)a0;

@end
