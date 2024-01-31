@class UILabel, UIActivityIndicatorView;

@interface UIPrinterSetupConnectingView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double presentationTime;

- (void)willMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)presentView;
- (void)setMessage:(id)a0 active:(BOOL)a1;

@end
