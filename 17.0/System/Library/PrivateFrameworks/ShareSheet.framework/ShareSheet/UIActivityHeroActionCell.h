@class UIStackView, UIImageView, UILabel, NSLayoutConstraint;

@interface UIActivityHeroActionCell : UIActivityActionCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint *tallBottomInsetConstraint;

+ (double)heightForNumberOfLines:(double)a0;
+ (long long)numberOfLinesForTitle:(id)a0 itemWidth:(double)a1;

- (void)setDisabled:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;

@end
