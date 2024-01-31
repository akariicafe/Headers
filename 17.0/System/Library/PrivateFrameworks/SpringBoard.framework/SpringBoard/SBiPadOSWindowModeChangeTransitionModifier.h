@class SBAppLayout;

@interface SBiPadOSWindowModeChangeTransitionModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *fromAppLayout;
@property (readonly, nonatomic) SBAppLayout *toAppLayout;

- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)initWithTransitionID:(id)a0 fromAppLayout:(id)a1 toAppLayout:(id)a2;

@end
