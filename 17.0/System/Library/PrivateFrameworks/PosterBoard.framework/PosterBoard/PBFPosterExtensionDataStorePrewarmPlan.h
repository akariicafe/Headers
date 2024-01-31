@class NSOrderedSet, NSDictionary, NSString;

@interface PBFPosterExtensionDataStorePrewarmPlan : NSObject <NSCopying, NSMutableCopying>

@property (copy) NSOrderedSet *prewarmPhasePlan;
@property (copy) NSDictionary *phaseToPrewarmTimeout;
@property double defaultPhaseTimeoutInterval;
@property (copy) NSString *identifier;
@property (copy) NSDictionary *phaseToExecutionBlock;

- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)executionBlockForPhase:(id)a0;
- (double)timeoutIntervalForPhase:(id)a0;

@end
