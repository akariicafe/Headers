@class SBSAInterfaceElementPropertyIdentity;

@interface SBSABackgroundBlurPreferencesProvider : SBSABasePreferencesProvider {
    long long _backgroundBlurState;
    SBSAInterfaceElementPropertyIdentity *_animatingBlurFrameProperty;
}

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForVariableBlurUnderContainerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 offscreen:(BOOL)a1 context:(id)a2;

- (void).cxx_destruct;
- (id)preferencesFromContext:(id)a0;

@end
