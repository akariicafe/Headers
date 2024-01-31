@class SBFFluidBehaviorSettings, NSSet, SBAppLayout;

@interface SBIconViewVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *animationSettings;
@property (readonly, nonatomic) NSSet *excludedIconLocations;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppLayout:(id)a0 visible:(BOOL)a1 animationSettings:(id)a2 excludedIconLocations:(id)a3;
- (long long)type;

@end
