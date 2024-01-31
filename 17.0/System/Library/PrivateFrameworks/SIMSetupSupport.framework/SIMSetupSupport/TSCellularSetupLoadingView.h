@class UILabel, UIActivityIndicatorView;

@interface TSCellularSetupLoadingView : UIView

@property (retain, nonatomic) UILabel *firstLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (nonatomic) BOOL isRemotePlan;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupLabels;
- (void)_setupActivityIndicator;
- (void)spinnerStartAnimating;
- (void)spinnerStopAnimating;

@end
