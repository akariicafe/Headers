@class NSArray, NSObject;
@protocol OS_dispatch_queue, AEPolicyStore, AEPerformancePrimitives;

@interface AEPolicyBundle : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<AEPolicyStore> _policyStore;
    NSArray *_activations;
    id<AEPerformancePrimitives> _performancePrimitives;
}

- (void).cxx_destruct;
- (void)activateSessionWithCompletion:(id /* block */)a0;
- (id)initWithPolicyStore:(id)a0 performancePrimitives:(id)a1 activations:(id)a2 queue:(id)a3;
- (id)recoverySession;

@end
