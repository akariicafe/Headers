@class BLSHAggregateSystemActivityAssertion;

@interface BLSHAggregatedSystemActivityAssertionFactory : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BLSHAggregateSystemActivityAssertion *_lock_aggregateAssertion;
}

- (id)init;
- (void).cxx_destruct;
- (id)createAggregatedSystemActivityAssertionWithIdentifier:(id)a0 usingOSInterfaceProvider:(id)a1;

@end
