@class NSString, HDAssertion, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDSHAccessibilityAssertionManager : NSObject <HDContentProtectionObserver, HDProfileReadyObserver> {
    HDAssertion *_accessibilityAssertion;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}

@property (nonatomic) BOOL shouldBeObservingContentProtectionState;
@property (readonly, nonatomic) HDAssertion *accessibilityAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)invalidateAccessibilityAssertion;
- (void)beginObservingContentProtectionState;
- (void).cxx_destruct;
- (void)stopObservingContentProtectionState;
- (void)_queue_takeAccessibilityAssertion;
- (void)_restoreContentProtectionObservingState;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;

@end
