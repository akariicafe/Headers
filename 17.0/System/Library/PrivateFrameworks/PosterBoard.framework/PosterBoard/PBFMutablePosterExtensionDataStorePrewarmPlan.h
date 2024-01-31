@class NSOrderedSet, NSString;

@interface PBFMutablePosterExtensionDataStorePrewarmPlan : PBFPosterExtensionDataStorePrewarmPlan

@property (copy) NSOrderedSet *prewarmPhasePlan;
@property (copy) NSString *identifier;

- (void)appendPrewarmPhase:(id)a0;
- (void)removePrewarmPhase:(id)a0;
- (void)setExecutionBlock:(id /* block */)a0 forPhase:(id)a1;
- (void)setTimeoutInterval:(double)a0 forPhase:(id)a1;

@end
