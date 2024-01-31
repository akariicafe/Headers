@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem

@property (retain) UIActivityIndicatorView *activityIndicator;

- (void)stopAnimating;
- (id)init;
- (void)startAnimating;
- (void).cxx_destruct;

@end
