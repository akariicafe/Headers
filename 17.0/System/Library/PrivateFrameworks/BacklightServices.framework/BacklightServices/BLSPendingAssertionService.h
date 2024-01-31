@class NSString, NSMutableArray;
@protocol BLSAssertionService;

@interface BLSPendingAssertionService : NSObject <BLSAssertionService> {
    NSMutableArray *_assertionsToAcquire;
    id<BLSAssertionService> _replacementService;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)replaceWithService:(id)a0;
- (oneway void)restartAssertionTimeoutTimer:(id)a0;
- (oneway void)cancelAssertion:(id)a0 withError:(id)a1;
- (oneway void)acquireAssertion:(id)a0;
- (void).cxx_destruct;

@end
