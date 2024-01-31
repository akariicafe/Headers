@class SBSwitcherShelf;

@interface SBShelfIconBounceTransitionModifier : SBTransitionSwitcherModifier {
    SBSwitcherShelf *_shelf;
}

- (id)appLayoutsToResignActive;
- (id)bounceIconBundleIdentifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounceIconInitialFrame;
- (id)keyboardSuppressionMode;
- (void).cxx_destruct;
- (struct SBSwitcherAsyncRenderingAttributes { BOOL x0; BOOL x1; })asyncRenderingAttributesForAppLayout:(id)a0;
- (unsigned long long)bounceIconGenerationCountForCurrentCount:(unsigned long long)a0;
- (id)initWithTransitionID:(id)a0 shelf:(id)a1;

@end
