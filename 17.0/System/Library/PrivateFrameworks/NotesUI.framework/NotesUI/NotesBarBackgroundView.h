@class UIColor, UIVisualEffectView;

@interface NotesBarBackgroundView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL hasBlur;

- (void)commonInit;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setOverrideUserInterfaceStyle:(long long)a0;
- (void)updateColor;

@end
