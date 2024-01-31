@class BKSHIDEventObserver, NSString, NSSet, BKSHIDEventDeferringToken, BKSHIDEventDisplay, NSHashTable, BKSHIDEventDeferringEnvironment;
@protocol BSInvalidatable;

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving> {
    BKSHIDEventObserver *_observer;
    id<BSInvalidatable> _observingAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSHIDEventDisplay *_lock_display;
    BKSHIDEventDeferringEnvironment *_lock_environment;
    BKSHIDEventDeferringToken *_lock_token;
    NSSet *_lock_resolutions;
    BOOL _lock_canReceiveEvents;
    NSHashTable *_lock_observers;
}

@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, nonatomic) BOOL canReceiveEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deferringResolutionsChanged;
- (id)init;
- (BOOL)_lock_canReceiveEvents;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)_initWithObserver:(id)a0;
- (void).cxx_destruct;
- (id)_lock_updateStateWithBlock:(id /* block */)a0;
- (void)addObserver:(id)a0;

@end
