@class SBAppLayout, SBFluidSwitcherAnimationSettings, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier

@property (retain, nonatomic) SBSwitcherModifier *multitaskingModifier;
@property (retain, nonatomic) SBAppLayout *selectedAppLayout;
@property (retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings;

- (id)visibleAppLayouts;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)_layoutSettings;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 multitaskingModifier:(id)a1 selectedAppLayout:(id)a2;

@end
