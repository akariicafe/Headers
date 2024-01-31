@class NSString, BLSHAggregateProcessAssertion, RBSProcessIdentity;

@interface BLSHAggregatedProcessAssertion : NSObject <BSInvalidatable> {
    BLSHAggregateProcessAssertion *_aggregate;
    BOOL _invalidated;
}

@property (readonly, copy, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly, nonatomic) double duration;
@property BOOL shouldFaultOnFailureToAcquire;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithExplanation:(id)a0 processIdentity:(id)a1 duration:(double)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)createRBSAssertion;
- (void)acquireWithCompletion:(id /* block */)a0;

@end
