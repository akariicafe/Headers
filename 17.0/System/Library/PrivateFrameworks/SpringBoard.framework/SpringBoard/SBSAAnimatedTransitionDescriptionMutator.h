@class SBFFluidBehaviorSettings, NSUUID, SBSAAnimatedTransitionDescription, NSString, NSSet;

@interface SBSAAnimatedTransitionDescriptionMutator : NSObject

@property (readonly, nonatomic) SBSAAnimatedTransitionDescription *animatedTransitionDescription;
@property (copy, nonatomic) NSUUID *animatedTransitionIdentifier;
@property (copy, nonatomic) SBFFluidBehaviorSettings *behaviorSettings;
@property (copy, nonatomic) NSString *responsibleProviderDebugString;
@property (copy, nonatomic) NSSet *milestones;

- (id)description;
- (void).cxx_destruct;
- (id)auxillaryBehaviorSettingsForKeyPath:(id)a0;
- (id)initWithAnimatedTransitionDescription:(id)a0;
- (id)keyPathsWithAuxillaryBehaviorSettings;
- (void)setAuxillaryBehaviorSettings:(id)a0 forKeyPath:(id)a1;

@end
