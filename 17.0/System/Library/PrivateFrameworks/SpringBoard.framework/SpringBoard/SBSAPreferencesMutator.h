@class SBSABackgroundBlurDescription, NSArray, SBSAElementLayoutTransition, NSString, SBSAViewDescription, SBSAPreferences;

@interface SBSAPreferencesMutator : NSObject <SBSAInterfaceElementAnimationDescribing, SBSAInterfaceElementAnimationCustomizing>

@property (readonly, nonatomic) SBSAPreferences *preferences;
@property (copy, nonatomic) NSArray *gestureDescriptions;
@property (copy, nonatomic) NSArray *timerDescriptions;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) SBSAViewDescription *containerParentViewDescription;
@property (copy, nonatomic) NSArray *containerViewDescriptions;
@property (copy, nonatomic) NSArray *elementDescriptions;
@property (copy, nonatomic) SBSAElementLayoutTransition *elementLayoutTransition;
@property (copy, nonatomic) SBSAElementLayoutTransition *lastChangingElementLayoutTransition;
@property (copy, nonatomic) SBSABackgroundBlurDescription *backgroundBlurDescription;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x0; long long x1; } curtainRenderingConfiguration;
@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x0; long long x1; } highLevelCurtainRenderingConfiguration;
@property (nonatomic, getter=isBlobEnabled) BOOL blobEnabled;
@property (nonatomic, getter=isCollisionImminent) BOOL collisionImminent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreferences:(id)a0;
- (void).cxx_destruct;
- (void)addMilestones:(id)a0 forPropertyIdentity:(id)a1;
- (id)animatedTransitionDescriptionForProperty:(id)a0;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id)a0 overridingExistingUnanimatedSettings:(BOOL)a1 withProperty:(id)a2 withMilestones:(id)a3;
- (void)associateAnimatedTransitionDescriptionOfProperty:(id)a0 withProperty:(id)a1 withMilestones:(id)a2;
- (id)effectiveAnimatedTransitionDescriptionForProperty:(id)a0;
- (id)effectiveMilestoneProvidingAnimatedTransitionDescriptionForProperty:(id)a0;
- (id)propertiesWithAnimatedTransitionDescriptions;
- (void)setAnimatedTransitionDescription:(id)a0 forProperty:(id)a1 withMilestones:(id)a2;
- (void)setAnimatedTransitionDescription:(id)a0 overridingExistingUnanimatedSettings:(BOOL)a1 forProperty:(id)a2 withMilestones:(id)a3;

@end
