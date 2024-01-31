@class NSString, TRAArbiter, TRAPreferencesTree, NSMutableArray;
@protocol BSInvalidatable;

@interface TRAArbitrationPreferencesResolutionStage : NSObject <BSDescriptionProviding> {
    NSMutableArray *_resolutionPolicySpecifiers;
    NSMutableArray *_nodesSpecsSpecifiers;
    NSMutableArray *_stageResolvers;
    TRAPreferencesTree *_stagePreferencesTree;
    id<BSInvalidatable> _stateDumpHandle;
}

@property (readonly, copy, nonatomic) NSMutableArray *participantsRoles;
@property (readonly, nonatomic) long long preferencesType;
@property (readonly, weak, nonatomic) TRAArbiter *arbiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (void)addNodesSpecificationsSpecifier:(id)a0;
- (void)addResolutionPolicySpecifier:(id)a0;
- (void)addResolutionPolicySpecifier:(id)a0 animate:(BOOL)a1;
- (void)addResolutionPolicySpecifier:(id)a0 update:(BOOL)a1;
- (void)addStageResolver:(id)a0;
- (void)removeResolutionPolicySpecifier:(id)a0;
- (void)removeResolutionPolicySpecifier:(id)a0 animate:(BOOL)a1;
- (void)removeResolutionPolicySpecifier:(id)a0 update:(BOOL)a1;
- (id)_setupStateDump;
- (void)_addStageComponent:(id)a0 toArray:(id)a1 update:(BOOL)a2 animate:(BOOL)a3;
- (void)_removeComponent:(id)a0 fromArray:(id)a1 update:(BOOL)a2 animate:(BOOL)a3;
- (id)initWithParticipantsRoles:(id)a0 preferencesType:(long long)a1 arbiter:(id)a2;
- (void)removeNodesSpecificationsSpecifier:(id)a0;
- (void)removeStageResolver:(id)a0;
- (void)updateResolutionWithContext:(id)a0;

@end
