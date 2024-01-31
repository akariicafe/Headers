@class NSString, BLSAttribute;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

@interface BLSHPauseOnSystemSleepAttributeEntry : NSObject <BLSHLocalAssertionAttributeHandlerEntry, SWSystemSleepObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    BOOL _lock_paused;
}

@property (readonly, weak, nonatomic) BLSAttribute *attribute;
@property (readonly, weak, nonatomic) id<BLSAssertionServiceResponding> assertion;
@property (readonly, weak, nonatomic) id<BLSHAssertionAttributeHandlerService> service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2 attributeHandler:(id)a3;

- (void)systemSleepMonitorSleepRequestAborted:(id)a0;
- (void)invalidate;
- (void)systemSleepMonitor:(id)a0 prepareForSleepWithCompletion:(id /* block */)a1;
- (void)systemSleepMonitorWillWakeFromSleep:(id)a0;
- (void).cxx_destruct;
- (id)initForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (BOOL)reactivateIfPossible;
- (void)systemSleepMonitor:(id)a0 sleepRequestedWithResult:(id /* block */)a1;

@end
