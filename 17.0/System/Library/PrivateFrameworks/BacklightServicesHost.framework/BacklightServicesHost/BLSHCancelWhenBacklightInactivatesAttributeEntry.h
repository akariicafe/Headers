@class NSString, BLSBacklight;

@interface BLSHCancelWhenBacklightInactivatesAttributeEntry : BLSValidWhenBacklightInactiveAttributeEntry <BLSBacklightStateObserving> {
    BLSBacklight *_backlight;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_active;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initForAttribute:(id)a0 fromAssertion:(id)a1 forService:(id)a2;
- (BOOL)reactivateIfPossible;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvents:(id)a2 abortedEvents:(id)a3;

@end
