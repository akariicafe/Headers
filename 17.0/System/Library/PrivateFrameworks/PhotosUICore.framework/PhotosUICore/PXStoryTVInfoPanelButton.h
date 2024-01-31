@class NSString, UIVisualEffectView, UILabel, _UIFloatingContentView, UIView;

@interface PXStoryTVInfoPanelButton : UIView {
    _UIFloatingContentView *_floatingContentView;
    UILabel *_label;
    UIView *_focusView;
    UIVisualEffectView *_backgroundEffectView;
}

@property (copy, nonatomic) NSString *text;

+ (double)widthForText:(id)a0;

- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateAppearance;
- (void)setControlState:(unsigned long long)a0;
- (unsigned long long)elementControlState;
- (id)elementTintColor;
- (void)updateFocusState:(id)a0;

@end
