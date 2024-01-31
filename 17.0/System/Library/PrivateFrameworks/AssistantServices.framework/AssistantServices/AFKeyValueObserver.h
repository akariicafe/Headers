@class NSString, AFKeyValueObservingDeliveryOptions, AFOneArgumentSafetyBlock;

@interface AFKeyValueObserver : NSObject <AFKeyValueObserving> {
    _Atomic BOOL _isInvalid;
    AFOneArgumentSafetyBlock *_invalidation;
    id /* block */ _handler;
    AFKeyValueObservingDeliveryOptions *_deliveryOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_handleObservedChangeWithOldValue:(id)a0 andNewValue:(id)a1;
- (id)initWithObject:(id)a0 keyPath:(id)a1 handler:(id /* block */)a2 deliveryOptions:(id)a3;

@end
