@class UIColor, UIVisualEffectView, UIVisualEffect;

@interface _UIKeyShortcutHUDSeparatorView : UIView

@property (retain, nonatomic) UIVisualEffectView *separatorVisualEffectView;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *visualEffect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
