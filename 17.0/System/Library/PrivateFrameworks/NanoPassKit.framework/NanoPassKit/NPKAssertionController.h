@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface NPKAssertionController : NSObject {
    id /* block */ _assertionFactory;
    id /* block */ _assertionInvalidator;
    NSMapTable *_assertionMaps;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (void)_inQueue_releaseAssertionWithOwner:(id)a0;
- (void)_releaseAssertionFromOwnerObject:(id)a0 withDelay:(double)a1 completion:(id /* block */)a2;
- (void)createAssertionForOwnerObject:(id)a0 withReason:(id)a1;
- (id)initWithAssertionFactory:(id /* block */)a0 invalidator:(id /* block */)a1;
- (void)releaseAssertionFromOwnerObject:(id)a0;
- (void)releaseAssertionFromOwnerObject:(id)a0 withDelay:(double)a1;
- (void)releaseAssertionFromOwnerObject:(id)a0 withDelay:(double)a1 completion:(id /* block */)a2;

@end
