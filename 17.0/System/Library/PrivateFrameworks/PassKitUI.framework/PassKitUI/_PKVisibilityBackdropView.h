@protocol _PKVisibilityBackdropViewDelegate;

@interface _PKVisibilityBackdropView : _UIBackdropView {
    double _visibility;
    double _visibilityAnimationTarget;
    unsigned int _animationCounter;
    unsigned int _styleToken;
    BOOL _updatingBackdropSettings;
    long long _style;
}

@property (weak, nonatomic) id<_PKVisibilityBackdropViewDelegate> delegate;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 privateStyle:(long long)a1;
- (void).cxx_destruct;
- (double)pkui_visibility;
- (void)_pkui_setVisibility:(double)a0 animated:(BOOL)a1;
- (void)_updateStyleIfNecessary;
- (void)pkui_accessibilitySettingsDidChange:(id)a0;
- (void)pkui_commitBackdropSettings;
- (long long)pkui_preferredBackdropStyle;
- (void)pkui_setVisibility:(double)a0 animated:(BOOL)a1;
- (void)pkui_updateBackdropSettings;

@end
