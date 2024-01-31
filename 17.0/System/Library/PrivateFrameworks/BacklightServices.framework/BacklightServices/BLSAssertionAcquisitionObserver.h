@class NSString;

@interface BLSAssertionAcquisitionObserver : NSObject <BLSAssertionObserving> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _lock_completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)assertion:(id)a0 didFailToAcquireWithError:(id)a1;
- (void)assertionWasAcquired:(id)a0;

@end
