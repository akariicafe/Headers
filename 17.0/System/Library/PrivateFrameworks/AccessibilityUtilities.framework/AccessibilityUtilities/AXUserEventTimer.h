@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AXUserEventTimer : NSObject {
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSHashTable *_assertions;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)userEventOccurred;
- (void)_stopTrackingPoorMansAssertion:(id)a0;
- (BOOL)_canUseIdleTimerServices;
- (void)_startTrackingPoorMansAssertion:(id)a0;
- (id)acquireAssertionToDisableIdleTimerWithReason:(id)a0;

@end
