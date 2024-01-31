@class UILabel, UIImageView;

@interface NUArticleNextButton : UIButton

@property (readonly, nonatomic) UILabel *nextTitleLabel;
@property (readonly, nonatomic) UIImageView *nextArrowImageView;

+ (id)titleLabelFont;
+ (id)nextArrowImage;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setNextLabelTitle:(id)a0 animated:(BOOL)a1;

@end
