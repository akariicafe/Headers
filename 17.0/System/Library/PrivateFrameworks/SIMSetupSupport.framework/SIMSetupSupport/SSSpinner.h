@class UILabel, UIActivityIndicatorView;

@interface SSSpinner : UIStackView

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) UILabel *label;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void)stopAnimating;
- (id)initWithText:(id)a0;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)updateText:(id)a0;

@end
