@class UIColor;

@interface SBRoundedRectBorderView : UIView

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;

- (void)setBorderColor:(id)a0;
- (void)setBorderWidth:(double)a0;
- (double)borderWidth;
- (id)borderColor;
- (void)setCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)cornerRadius;

@end
