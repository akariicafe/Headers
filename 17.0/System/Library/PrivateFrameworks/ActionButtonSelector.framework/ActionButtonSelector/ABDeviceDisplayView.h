@class CAPackage, CAStateController, CALayer, ABFloatSpringProperty;

@interface ABDeviceDisplayView : UIView {
    CAPackage *_package;
    CALayer *_islandLayer;
    CALayer *_ringerLayer;
    CAStateController *_ringerStateController;
    ABFloatSpringProperty *_islandY;
    ABFloatSpringProperty *_islandWidth;
    ABFloatSpringProperty *_islandHeight;
    ABFloatSpringProperty *_islandShake1;
    ABFloatSpringProperty *_islandShake2;
    ABFloatSpringProperty *_ringerVisible;
    BOOL _isSilentModeEnabled;
    long long _islandMode;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_shake;
- (void)_setSilentModeEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_resetSprings;
- (void)_toggleSilentMode;
- (void)_transitionIslandToCompact;
- (void)_transitionIslandToGrowing;
- (void)_transitionIslandToInert;
- (void)_transitionIslandToLarge;

@end
