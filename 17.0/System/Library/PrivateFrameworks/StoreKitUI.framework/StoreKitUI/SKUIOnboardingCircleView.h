@class UIColor, UILabel, UIImageView;

@interface SKUIOnboardingCircleView : UIView {
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (copy, nonatomic) UIColor *fillColor;
@property (nonatomic) double minimumDiameter;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long titlePosition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundImage:(id)a0;
- (void)setBackgroundImageAlpha:(double)a0;

@end
