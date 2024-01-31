@class UIVisualEffect, NSString, SFThemeColorBarTheme, UIVisualEffectView, UIView;

@interface SFThemeColorEffectView : UIView {
    UIView *_darkeningView;
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIVisualEffect *effect;
@property (copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
@property (retain, nonatomic) SFThemeColorBarTheme *theme;
@property (nonatomic) double themeColorVisibility;

- (void)_updateFillColor;
- (id)initWithEffect:(id)a0;
- (void).cxx_destruct;
- (BOOL)_needsBlur;
- (void)_applyTheme;

@end
