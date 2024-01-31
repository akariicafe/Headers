@class UIColor, NSString, _UIBackdropView, UIView, _UINavigationBarAppearanceStorage;

@interface SKUITabBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_borderView;
}

@property (retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage;
@property (nonatomic) long long barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic) BOOL barWantsAdaptiveBackdrop;
@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long backdropStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_currentCustomBackground;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forceUpdateBackgroundImage:(BOOL)a1;
- (void)_setIsContainedInPopover:(BOOL)a0;
- (void)updateBackgroundImage;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL *)a0;

@end
