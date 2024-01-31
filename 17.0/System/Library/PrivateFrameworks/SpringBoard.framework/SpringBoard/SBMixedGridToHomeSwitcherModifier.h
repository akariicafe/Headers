@class SBSwitcherModifier;
@protocol SBMixedGridSwitcherProviding;

@interface SBMixedGridToHomeSwitcherModifier : SBTransitionSwitcherModifier {
    long long _direction;
    SBSwitcherModifier<SBMixedGridSwitcherProviding> *_mixedGridModifier;
}

- (struct CGPoint { double x0; double x1; })contentOffsetForIndex:(unsigned long long)a0 alignment:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutElements;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (id)transitionWillBegin;
- (id)_newMixedGridModifier;
- (id)initWithTransitionID:(id)a0 direction:(long long)a1 mixedGridModifier:(id)a2;

@end
