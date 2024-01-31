@class UIColor, ASCStarRow;

@interface ASCStarRatingView : UIView

@property (nonatomic) double rating;
@property (readonly, nonatomic) long long maxNumberOfStars;
@property (readonly, nonatomic) long long starSize;
@property (readonly, nonatomic) ASCStarRow *hollowStarRowView;
@property (readonly, nonatomic) ASCStarRow *filledStarRowView;
@property (readonly, nonatomic) UIColor *starColor;

+ (id)greyFill;

- (id)accessibilityLabel;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (id)initWithMaxNumberOfStars:(long long)a0 starSize:(long long)a1 andFill:(BOOL)a2;
- (struct CGSize { double x0; double x1; })sizeWithStarSize:(long long)a0 andNumberOfStars:(long long)a1;

@end
