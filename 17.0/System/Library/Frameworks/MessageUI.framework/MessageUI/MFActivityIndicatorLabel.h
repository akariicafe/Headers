@class UILabel, UIActivityIndicatorView;

@interface MFActivityIndicatorLabel : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *textLabel;

- (void)stopAnimating;
- (id)accessibilityLabel;
- (id)init;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)setActivityIndicator:(id)a0;

@end
