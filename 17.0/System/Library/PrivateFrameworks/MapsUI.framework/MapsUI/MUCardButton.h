@class UIMenu, NSString, UIColor, UIView, UIButton;

@interface MUCardButton : UIView {
    UIButton *_actionButton;
    BOOL _isHovering;
}

@property (nonatomic) BOOL blurBackground;
@property (copy, nonatomic) NSString *symbolName;
@property (nonatomic) BOOL drawBackground;
@property (retain, nonatomic) UIMenu *menu;
@property (readonly, nonatomic) UIButton *underlyingButton;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *foregroundColor;

- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setupConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupDefaults;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)_setupButton;
- (void)_updateButtonAppearance;

@end
