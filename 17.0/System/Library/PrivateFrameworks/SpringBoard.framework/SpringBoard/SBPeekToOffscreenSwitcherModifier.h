@class SBAppLayout;

@interface SBPeekToOffscreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_peekingAppLayout;
    long long _peekConfiguration;
    long long _spaceConfiguration;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowVisible;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithTransitionID:(id)a0 peekingAppLayout:(id)a1 peekConfiguration:(long long)a2 spaceConfiguration:(long long)a3;

@end
