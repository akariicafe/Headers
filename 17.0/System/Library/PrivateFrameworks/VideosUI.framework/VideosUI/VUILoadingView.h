@class VUILabel, UIActivityIndicatorView;

@interface VUILoadingView : UIView

@property (retain, nonatomic) VUILabel *loadingLabel;
@property (retain, nonatomic) UIActivityIndicatorView *indicatorView;
@property (nonatomic) double delay;

- (void)startTimer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 loadingString:(id)a1;

@end
