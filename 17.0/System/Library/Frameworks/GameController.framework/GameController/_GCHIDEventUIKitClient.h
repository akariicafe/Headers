@class NSString, BKSHIDEventDeliveryPolicyObserver;

@interface _GCHIDEventUIKitClient : _GCHIDEventSubject <BKSHIDEventDeliveryPolicyObserving> {
    BKSHIDEventDeliveryPolicyObserver *_hidObserver;
    BOOL _hidObserverWasActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)observerDeliveryPolicyDidChange:(id)a0;
- (void)publishHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
