@class UIColor, WFIcon, UIImageView, UIView;

@interface WFIconStackView : UIView

@property (retain, nonatomic) WFIcon *icon;
@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (retain, nonatomic) UIView *iconImageViewContainer;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *colorViewContainer;
@property (retain, nonatomic) UIView *colorView;
@property (nonatomic) long long mode;
@property (retain) UIColor *appIconAverageColor;
@property (nonatomic) BOOL inAperture;

- (id)initWithApplicationBundleIdentifier:(id)a0;
- (void)setIcon:(id)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)setMode:(long long)a0 animated:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithIcon:(id)a0 resolution:(struct CGSize { double x0; double x1; })a1;
- (void)setIconImage:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldMaskIconImageView;
- (void)transitionToIconOnlyState;

@end
