@class UIActivityIndicatorView, NSLayoutConstraint, PSSpecifier;

@interface STSpinnerFooterView : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (readonly, weak) PSSpecifier *specifier;
@property (readonly) UIActivityIndicatorView *spinnerView;
@property (retain) NSLayoutConstraint *spinnerViewVerticalPositionConstraint;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0;
- (void)reloadFromSpecifier;
- (void)startAnimatingSpinner;
- (void)stopAnimatingSpinner;

@end
