@class NSNumber, NSString, TRAArbiter;

@interface SBTraitsPipelineBlockBasedPolicySpecifier : NSObject <BSInvalidatable, TRAPreferencesStageResolutionPolicySpecifying> {
    BOOL _isValid;
    NSNumber *_componentOrder;
}

@property (readonly, copy, nonatomic) id /* block */ specifierBlock;
@property (readonly, weak, nonatomic) TRAArbiter *arbiter;
@property (readonly, nonatomic) NSNumber *componentOrder;
@property (copy, nonatomic) NSString *specifierDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (long long)preferencesType;
- (void)invalidate;
- (id)initWithPolicySpecifierBlock:(id /* block */)a0 specifierDescription:(id)a1 componentOrder:(id)a2 arbiter:(id)a3;
- (void).cxx_destruct;
- (void)updateStageParticipantsResolutionPolicies:(id)a0 context:(id)a1;

@end
