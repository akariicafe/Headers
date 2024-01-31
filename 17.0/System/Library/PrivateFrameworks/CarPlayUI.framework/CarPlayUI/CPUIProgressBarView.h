@class UIColor, UIView;

@interface CPUIProgressBarView : UIView

@property (retain, nonatomic) UIView *overallBarView;
@property (retain, nonatomic) UIView *progressBarView;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *barColor;
@property (retain, nonatomic) UIColor *trackColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
