@class NSString, UIColor, UILabel;

@interface PKPassPaymentSummaryHeaderView : UIView {
    UILabel *_titleLabel;
    UILabel *_secondaryTitleLabel;
}

@property (retain, nonatomic) NSString *primaryTitle;
@property (retain, nonatomic) NSString *secondaryTitle;
@property (retain, nonatomic) UIColor *color;

+ (id)_titleFont;
+ (double)preferredHeight;
+ (struct CGSize { double x0; double x1; })_sizeForLabelWithText:(id)a0 font:(id)a1 maximumNumberOfLines:(long long)a2 width:(double)a3;

- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
