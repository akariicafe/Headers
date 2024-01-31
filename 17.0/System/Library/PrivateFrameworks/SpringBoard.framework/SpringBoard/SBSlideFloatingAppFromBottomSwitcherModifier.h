@class NSString, SBAppLayout;

@interface SBSlideFloatingAppFromBottomSwitcherModifier : SBTransitionSwitcherModifier <BSDescriptionProviding> {
    SBAppLayout *_fromFloatingAppLayout;
    SBAppLayout *_toFloatingAppLayout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)visibleAppLayouts;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)initWithTransitionID:(id)a0 fromFloatingAppLayout:(id)a1 toFloatingAppLayout:(id)a2;

@end
