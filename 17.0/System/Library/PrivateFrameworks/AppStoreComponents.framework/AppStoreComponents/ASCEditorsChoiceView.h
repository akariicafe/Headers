@class UIColor, UILabel;

@interface ASCEditorsChoiceView : UIView

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UILabel *titleLabel;

+ (id)editorsChoiceFont;
+ (id)editorsChoiceText;
+ (double)laurelPadding;
+ (id)leftLaurel;
+ (id)rightLaurel;

- (id)accessibilityLabel;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
