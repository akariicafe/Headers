@class NSArray, UIActivityIndicatorView, NSString, UILabel;

@interface UIPrintMessageAndSpinnerView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSArray *currentHorizontalConstraints;
@property (retain, nonatomic) NSString *messageText;
@property (nonatomic) BOOL spinSpinner;
@property (nonatomic) BOOL spinnerHidden;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)updateFont;

@end
