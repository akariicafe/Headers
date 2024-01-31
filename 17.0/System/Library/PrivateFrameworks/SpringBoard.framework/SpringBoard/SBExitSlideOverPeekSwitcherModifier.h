@class SBAppLayout;

@interface SBExitSlideOverPeekSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_floatingAppLayout;
    long long _floatingConfiguration;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithTransitionID:(id)a0 floatingAppLayout:(id)a1 floatingConfiguration:(long long)a2;

@end
